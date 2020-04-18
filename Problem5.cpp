/*
    Problem 5 Description
    
    2520 is the smallest number that can be divided by each of the numbers from
    1 to 10 without any remainder.

    What is the smallest positive number that is evenly divisible by all of the
    numbers from 1 to 20?
*/

#include <iostream>

// Returns the greatest common denominator of a and b
int gcd(int a, int b)
{ 
    if (a == 0) return b;
    return gcd(b % a, a);
}

// Returns the least common multiple of a and b
int lcm(int a, int b)  
{  
    return (a*b)/gcd(a, b);
}

int main()
{
    long long num = 1;
    const int lower_limit = 1;
    const int upper_limit = 20;

    for(int i = lower_limit; i < upper_limit; i++)
    {
        num = lcm(i, num);
    }

    std::printf("%I64d\n", num); // 232792560

    return 0;
}