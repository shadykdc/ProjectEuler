/*
    Problem 6 Description
    
    The sum of the squares of the first ten natural numbers is,

    1^2 + 2^2 + ... + 10^2 = 385

    The square of the sum of the first ten natural numbers is,

    (1 + 2 + ... + 10)^2 = 55^2 = 3025

    Hence the difference between the sum of the squares of the first ten natural
    numbers and the square of the sum is 3025 − 385 = 2640.

    Find the difference between the sum of the squares of the first one hundred
    natural numbers and the square of the sum.
*/

#include <iostream> // printf

int main()
{
    long long output = 0;
    const int lower_limit = 1;
    const int upper_limit = 100;

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        output += i;
    }

    output = output^2;

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        output -= i;
    }

    std::printf("%I64d\n", output); // 25164150

    return 0;
}