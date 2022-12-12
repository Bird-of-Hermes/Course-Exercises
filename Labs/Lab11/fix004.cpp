#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    char name[] = "C++ Primer Plus";
    char VEClen[] = {" characters!\n"};
    char VECsize[] = {" bytes!"};
    cout << strlen(name) << VEClen << sizeof(name) << VECsize;
    return 0;
}