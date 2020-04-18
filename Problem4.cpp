/*
    Problem 4 Description
    
    A palindromic number reads the same both ways. The largest palindrome made
    from the product of two 2-digit numbers is 9009 = 91 × 99.

    Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

#define MAX_DIGITS 6

// Gets the digits of number and puts them into array as single digits
// e.g. number = 123 produces array = {1, 2, 3}
// index should be the number of digits in number / the size of the array
bool GetDigits(int number, int index, int* array)
{
    index--;
    if(number >= 10)
    {
        GetDigits(number / 10, index, array);
    }

    if (index < 0 || index >= MAX_DIGITS) return false;

    array[index] = number % 10;

    return true;
}

// Returns true if num is a palindrome
bool IsPalindrome(int num)
{
    int array[MAX_DIGITS] = {0};

    // Populate array with digits
    if (!GetDigits(num, MAX_DIGITS, array))
    {
        std::printf("GetDigits failed.\n");
    }
    
    int idx1 = 0;
    int idx2 = MAX_DIGITS - 1;

    // Move to the first non-zero number
    while (array[idx1] == 0) idx1++;
    
    // Check that the number is a palindrome
    while (idx1 < idx2)
    {
        if (array[idx1] != array[idx2]) return false;
        idx1++;
        idx2--;
    }

    return true;
}

int main()
{
    const int lower_limit = 100;
    const int upper_limit = 999;
    int largest_palindrome = 0; // 999 * 999 = 998001 so int is fine

    for (int factor1 = upper_limit; factor1 >= lower_limit; factor1--)
    {
        for (int factor2 = factor1; factor2 >= lower_limit; factor2--)
        {
            int product = factor1 * factor2;
            if (IsPalindrome(product))
            {
                if(product > largest_palindrome) largest_palindrome = product;
            }
        }
    }

    std::printf("%d is the largest palindrome.\n", 
                largest_palindrome); // 906609

    return 0;
}