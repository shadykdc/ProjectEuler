/*
    Problem 7 Description
    
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see
    that the 6th prime is 13.

    What is the 10,001st prime number?
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
    const int upper_limit = 10001;
    int prime_count = 0;
    int current_number = 0;

    while (prime_count != upper_limit)
    {
        if (IsPrime(current_number)) prime_count++;
        
        current_number += 1;
    }
    current_number -= 1;

    std::cout << current_number << std::endl; // 104743

    return 0;
}