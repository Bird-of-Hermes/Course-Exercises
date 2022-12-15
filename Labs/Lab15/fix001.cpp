#include <iostream>
using namespace std;

int main()
{
    cout << "Enter with the number of students (min. 2): ";
    uint32_t StudentsNumber;
    cin >> StudentsNumber;
    float *ptr = new float[StudentsNumber]; // allocating memory
    cout << "Enter the score of two of them: ";
    cin >> ptr[0];
    cin >> ptr[1];
    cout << "\nEntered scores were: " << ptr[0] << " and " << ptr[1];
    delete ptr; // deleting allocated memory

    return 0;
}