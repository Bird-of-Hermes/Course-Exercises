#include <iostream>
using namespace std;

int main()
{
    cout << "Do you want to count up to which number? ";
    int32_t Count;
    cin >> Count;
    if (Count < 0)
    {
        cout << "I can't count negative numbers!";
        return 0;
    }
    
    for (int i = 1; i <= Count; i++) // 1.2..10
    {
        cout << i << " ";
    }
    cout << endl;
    int a;
    cin >> a;
    for (int i = Count; i != 0; i--) // 10.9..1
    {
        cout << i << " ";
    }
    cout << endl;
    cin >> a;
    for (int i = 1; i < Count; i = i+2) // 1.3...9
    {
        cout << i << " ";
    }
    cout << endl;
    cin >> a;
    for (int i = 9; i >= 1; i=i-2) // 9.7..1
    {
        cout << i << " ";
    } 
    cout << endl;
    cin >> a;
    for (int i = 2; i <= Count; i = i + 2) // 2.4..10
    {
        cout << i << " ";
    }
    cout << endl;
    cin >> a;
    for (int i = Count; i >= 2 ; i = i-2) // 10.8...2
    {
        cout << i << " ";
    }
}