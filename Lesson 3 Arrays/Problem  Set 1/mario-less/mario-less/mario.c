#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; /* Need to  declare this variable outside the do clause*/
    do
    {
       height=get_int("Height: ");
    }
    while(height<1 || height>8);
    for(int i=1; i <= height; i++)
    {
        for (int j = height - i; j > 0; j--)
        {
            printf(" "); /*print spaces*/
        }
        for (int z = 1; z <= i; z++)
        {
            printf("#"); /*print hashes*/
        }
        printf("\n");
    }
}

