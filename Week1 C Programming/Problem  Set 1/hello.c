#include<cs50.h> // h->header file
#include<stdio.h> // standard input & output

int main(void)
{
    string answer=get_string("What's your name?");
    printf("hello, %s\n", answer);  //f means formatted %s is placeholder for string
}