#include<stdio.h>
#include<cs50.h>

int get_length(string s);
int main(void)
{
    string name=get_string("Type your name here: ");
    int length=get_length(name);
    printf("length is %i\n",length);
}

int get_length(string s)
{
    int i=0;
    while(s[i]!='\0')
    {
        i++;
    }
    return i;
}