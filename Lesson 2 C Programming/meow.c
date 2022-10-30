#include<stdio.h>

void meow(int n);//declare the function ahead of the main function

int main(void)
{
    meow(3);
}

void meow(int n)
{
    for(int i=0;i<n;i++)
        {
           printf("Meow\n");
        }

}
