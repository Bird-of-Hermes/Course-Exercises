#include <iostream>
using namespace std;

struct Compl // creating a Compl type
{
    float x;
    float y;
};

// prototypes
// making cin, cout, + and * work with Compl type  -> The professor done these during class.
// They are in "lab12r2.cpp" file found under the github/youtube channel appointed in the "README" file.


istream & operator>>(istream& , Compl&);     // read
ostream & operator<<(ostream& , Compl);      // display
Compl operator+(Compl, Compl);		   // allows operator '+' to be used between Compl numbers
Compl operator*(Compl, Compl);         // allows operator '-' to be used between Compl numbers
Compl sum(Compl, Compl);        // sum of complex numbers
Compl mult(Compl, Compl);       // multiplification of complex numbers
Compl read(); // reads complex numbers
void display(Compl); // display complex numbers


int main()
{
    Compl num1;
    Compl num2;
    cout << "Enter with the 1st complex number ";
    num1 = read();
    cout << "Enter with the 2nd complex number ";
    num2 = read();
    Compl res = sum(num1,num2);
    display(res);
    res = mult(num1,num2);
    display(res);
 // ----------------------------------------------------------------- rev002 below
    cout << "------------------------------------- \n"
         << "Exercise part 2 below";
    cout << "\nEnter with the 1st complex number ";
    cin >> num1;
    cout << "Enter with the 2nd complex number ";
    cin >> num2;
    cout << "The sum of both is " << num1+num2;
    cout << "The multiplification of both is " << num1*num2;

    return 0;
}

istream & operator>>(istream& is, Compl& c) // rev002 cin
{
    is >> c.x; // receives first part of a complex number
    is >> c.y; // receives second part of a complex number
    char str;
    is >> str; // stores away the 'i' part of a complex number
    return is;
}

ostream & operator<<(ostream& os, Compl c)  // rev002 cout
{
    os << c.x; // outputs the first part of a complex number
    os.setf(ios::showpos); // always shows the '+' or '-' part of a number  
    os << c.y << "i" << endl; // outputs the second part of a complex number
    os.unsetf(ios::showpos); // stops showing the sign of a number
    return os;
}

Compl operator+(Compl a, Compl b) // rev002 '+'
{
    Compl result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

Compl operator*(Compl a, Compl b)    // rev002 '*'
{
    Compl result;
    result.x = (a.x * b.x) - (a.y * b.y);
    result.y = (a.y * b.x) + (a.x * b.y);
    return result;
}

Compl sum(Compl a, Compl b) // rev001 sum
{
    Compl result;
    result.x = (a.x) + (b.x);
    result.y = (a.y) + (b.y);
    return result;
}

Compl mult(Compl a, Compl b)    // rev001 mult
{
    Compl result;
    result.x = (a.x * b.x) - (a.y * b.y);
    result.y = (a.y * b.x) + (a.x * b.y);
    return result;
}

void display(Compl c) // rev001 display
{
    cout << c.x; // outputs the first part of a complex number
    cout.setf(ios::showpos); // always shows the '+' or '-' part of a number  
    cout << c.y << "i" << endl; // outputs the second part of a complex number
    cout.unsetf(ios::showpos); // stops showing the sign of a number
}

Compl read() // reads Compl
{
    Compl read;
    cin >> read.x;
    cin >> read.y;
    cin.ignore();
    return read;
}