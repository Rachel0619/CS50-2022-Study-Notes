#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //prompt user for x
    long x=get_long("x: ");
    
    //prompt user  for y
    long y=get_long("y: ");
    
    //perform addition
    long z=x+y;
    printf("%li\n", z);
}