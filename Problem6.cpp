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
    // Inputs
    const int lower_limit = 1;
    const int upper_limit = 100;

    // Outputs - int max is 2147483647
    int sum = (upper_limit  + lower_limit) * (upper_limit / 2);
    long sum_of_the_squares = 0;

    for (int i = lower_limit; i <= upper_limit; i++)
    {
        sum_of_the_squares += i * i;
    }

    std::printf("%d", (int)(sum * sum - sum_of_the_squares)); // 25164150

    return 0;
}