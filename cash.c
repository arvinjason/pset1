#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change<0);
    int cent = round(change*100);
    int count = 0;
    while (cent > 0)
    {
        if (cent >= 25)
        {
            cent -= 25;
            count++;
        }
        else if (cent >= 10)
        {
            cent -= 10;
            count++;
        }
        else if (cent >= 5)
        {
            cent -= 5;
            count++;
        }
        else
        {
            cent -= 1;
            count++;
        }
    }
    printf("%i \n", count);   
}
