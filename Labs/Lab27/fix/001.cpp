#include <cctype>
#include <iostream>

inline int max(int a, int b){return (a>b?a:b);}

inline int min(int a, int b){return a<b?a:b;}

inline int absolute(int a){return a>0?a:-a;}

inline char Ch(char a){return toupper(a);}

int main()
{
    int a = 4, b = 5;
    char c = 'c';

    std::cout << max(a,b) << std::endl;
    std::cout << min(a,b) << std::endl;
    std::cout << absolute(a) << std::endl;
    std::cout << Ch(c) << std::endl;

    return 0;
}