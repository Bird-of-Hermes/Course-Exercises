#include <iostream>
using namespace std;
 // 2nd hardest exercise by a little margin
int main()
{
    // creating and filling the matrix
    char Matrix[16][16]{};
    for (size_t i = 0; i < 16; i++)
    {
        for (size_t j = 0; j < 16; j++)
        {
            Matrix[j][i] = i*16+j;
        }
    }
    // acquiring user information
    cout << "Which region of the matrix are you interested on?" << endl;
    cout << "Columns (Ex.: 5 to 9 would be 5 9): ";
    int Column1,Column2;
    cin >> Column1 >> Column2;
    cout << "Lines (Ex.: For 2 to 5 would be 2 5): ";
    int Line1, Line2;
    cin >> Line1 >> Line2;
    // calculating matrix to allocate the user-defined static matrix region
    int x_min = min(Line1, Line2);
    int x_max = max(Line1, Line2);
    int y_min = min(Column1, Column2);
    int y_max = max(Column1, Column2);
    int const LineD = x_max - x_min + 1;
    int const ColumnD = y_max - y_min + 1;
    // dynamic allocating memory
    char **MatrixUser = new char*[LineD];
    for (size_t i = 0; i < LineD; i++)
    {
        MatrixUser[i] = new char[ColumnD];
    }
    // copying the data from the static matrix to the user-defined matrix
    for (size_t i = x_min; i <= x_max; i++)
    {
        for (size_t j = y_min; j <= y_max; j++)
        {
           MatrixUser[i-x_min][j-y_min] = Matrix[i][j];
        }
    }
    // displaying the matrix for the user
    for (size_t i = 0; i < LineD; i++)
    {
        for (size_t j = 0; j < ColumnD; j++)
        {
            cout << "[" << MatrixUser[i][j] << "] ";
        }
        cout << endl;
    }
    // returning memory to the OS
    for (size_t i = 0; i < LineD; i++)
    {
        delete[] MatrixUser[i];
    }
    delete[] MatrixUser;

    return 0;
}