#include<stdio.h>
#include<cs50.h>

int main(void)
{
    const int Mine=2;
    int points=get_int("How many points did your lose?");

    if(points<2)
    {
        printf("You lost  fewer points  than me.\n");
    }
    if(points>2)
    {
        printf("Yout lost more points than  me.\n");
    }
    else
    {
        printf("You lost the same number of points as me.\n");
    }
}