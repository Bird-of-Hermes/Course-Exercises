#include <iostream>
#include <cmath>

int main()
{
    size_t PrimeCounter{}, i = 1, PrimeNum{}, PrimePos{};
    bool isPrime = true;
    std::cout << "Enter which prime number you want to know: ";
    std::cin >> PrimePos;

    while (PrimeCounter < PrimePos)
    {
        isPrime = true;
        for (size_t j = 2; j <= sqrt(i); j++) // don't have to check for primes above sqrt(i) (performance+)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            PrimeCounter++;
            PrimeNum = i;
        }
        i = i+2; // checks only odd numbers (50% performance gain)
    }
    std::cout << "The " << PrimePos << "th prime number is " << PrimeNum;
}