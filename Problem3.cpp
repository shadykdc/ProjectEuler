/*
    Problem 3 Description
    
    The prime factors of 13195 are 5, 7, 13 and 29.

    What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream> // printf

// Returns true if num is prime
bool IsPrime(long long num)
{
    if (num == 0 || num == 1) return false;

    long long smallest_factor = 2;

    while (smallest_factor <= num/smallest_factor)
    {
        if (num % smallest_factor == 0) return false;
        
        smallest_factor++;
    }

    return true;
}

int main()
{
    long long num = 600851475143;
    long long factor1 = 1;
    long long factor2 = num;

    while (factor2 > 1)
    {
        factor1++;

        // Check factor1 is factor
        if (num % factor1 != 0) continue;
        factor2 = num/factor1;

        // Check that the larger factor is prime
        if (IsPrime(factor2))
        {
            std::printf("The largest prime factor is %I64d\n", factor2); // 6857
            return 0;
        }
    }

    std::printf("That number doesn't have a prime factor.");
    return 0;
}