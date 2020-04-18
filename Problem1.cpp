/*
    Problem 1 Description
    
    If we list all the natural numbers below 10 that are multiples of 3 or 5,
    we get 3, 5, 6 and 9. The sum of these multiples is 23.

    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

int main()
{
    // Inputs
    const int maximum = 1000;
    const int first_multiple = 5;
    const int second_multiple = 3;

    int output = 0;

    for (int i = 0; i < maximum; i++)
    {
        if (i % first_multiple == 0 ||
            i % second_multiple == 0)
        {
            output+= i;
        }
    }
    std::printf("%d", output); // 233168
}