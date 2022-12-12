// EX.: Find out what happens when we try to show a vector of characters that isn't a string.
// To do this, initialize two vectors, one being a string and the other being just a vector
// of characters. Display both with cout.

#include <iostream>

int main()
{
    char vec1[] = {'v','e','c','t','o','r'};
	char vec2[] = {'s','t','r','i','n','g','\0'};
    std::cout << vec1 << "\n" << vec2;
}