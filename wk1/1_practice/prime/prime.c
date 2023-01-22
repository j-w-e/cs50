#include <cs50.h>
#include <stdio.h>

// Print out all the prime numbers, between a given minimum and maximum
// Implements a very simple check by dividing by every number between 2 and half the value

bool prime(int number);

int main(void)
{
    // Ask the user for min and max values
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    // Check all numbers between min and max to see if they are prime
    for (int i = min; i <= max; i++)
    {
        if (!prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number == 1)
    {
        return true;
    }
    // For a specific number, check if it has remainder when divided by all numbers up to half its value
    for (int j = 2; j <= (float) number / 2; j++)
    {
        if (number % j == 0)
        {
            return true;
        }
    }
    return false;
}
