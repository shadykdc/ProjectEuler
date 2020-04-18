/*
    Problem 9 Description
    
    A Pythagorean triplet is a set of three natural numbers, a < b < c,
    for which, a^2 + b^2 = c^2. For example, 32 + 42 = 9 + 16 = 25 = 52.

    There exists exactly one Pythagorean triplet for which a + b + c = 1000.
    Find the product abc.
*/

#include <iostream> // std::cout std::cin

int main()
{
    const int sum = 1000;

    for (int a = 1; a < sum - 2; a++)
    {
        for (int b = a + 1; b < sum - 1; b++)
        {
            int c = 1000 - a - b;
            if (a * a + b * b == c * c)
            {
                std::cout << a * b * c << std::endl; // 31875000
            }
        }
    }    

    return 0;
}