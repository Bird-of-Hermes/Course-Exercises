#include <iostream>
#include <fstream>
using namespace std;

struct Items
{
    float NPrice;
    float SPrice;
    int SPriceWhen;
};

float TTPay (Items, int);
float FullBuy(Items[], int[]);

int main()
{
    ifstream fin;
    int NumItems;

    fin.open("produtos.txt");
    if(!fin.is_open())
    {
        cerr << "Error opening file";
        exit(1);
    }
    
    fin >> NumItems;
    fin.close();
    
    Items * Products = new Items[NumItems];
    int * Orders = new int[NumItems];

    cout << "Total to pay: $" << FullBuy (Products, Orders);
    
    delete[] Products;
    delete[] Orders;

    return 0;
}

float TTPay (Items IName, int IAmount)
{
    float result = 0;
    if (IAmount > IName.SPriceWhen)
    {
        int totalamount = IAmount - IName.SPriceWhen;
        result += totalamount*IName.SPrice + IName.SPriceWhen*IName.NPrice;
    }
    else    
    result += IName.NPrice*IAmount;

    return result;
}

float FullBuy (Items Names[], int Amounts[])
{
    float result = 0;
    ifstream RRproducts, RRorders;
    char THAW[3]; // (TH)row (AW)ay
    int Qnts{}; // Quantities

    RRproducts.open("produtos.txt");
    if(!RRproducts.is_open())
    {
        cerr << "Error opening file";
        exit(1);
    }
    RRproducts >> Qnts;

    RRorders.open("pedidos.txt");
    if(!RRorders.is_open())
    {
        cerr << "ERROR OPENING FILE";
        exit(1);
    }
    RRorders >> Qnts;
    /////////////////////////////////// real calc ////////////////////////////////////////
    for (size_t i = 0; i < Qnts; i++)
    {
        RRproducts >> THAW;
        RRproducts >> Names[i].NPrice;
        RRproducts >> THAW;
        RRproducts >> Names[i].SPrice;
        RRproducts >> THAW;
        RRproducts >> Names[i].SPriceWhen;
        RRorders >> Amounts[i];
        result += TTPay(Names[i], Amounts[i]);
    }

    RRproducts.close();
    RRorders.close();

    return result;
}