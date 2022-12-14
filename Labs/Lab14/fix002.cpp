#include <iostream>

int main()
{
    char A = 'A';
    char *ptr = &A;
    *ptr = 'B';
    std::cout << A << std::endl;
    std::cout << *ptr << std::endl;
}