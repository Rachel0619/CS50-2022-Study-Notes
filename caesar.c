#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int k);

int main(int argc, string argv[])
{
    if(argc == 2)// check if the user provides exactly one command-line argument
    {
        printf("");
    }
    else
    {
        printf("Usage: ./caesar key\n");//error
        return 1;
    }
    if(only_digits(argv[1]) == 1)//check if the key consists of digits only
    {
        return 1;
    }

    int key = atoi(argv[1]);//converts argv[1] to an int

    string plain = get_string("plaintext: ");
    int n = strlen(plain);

    printf("ciphertext: ");
    for (int i=0; i<n; i++)
    {
        printf("%c", rotate (plain[i], key));//Using the Key
    }
    printf("\n");
}

bool only_digits(string s)
{
    for (int i=0, n=strlen(s); i<n; i++)
    {
        if (isdigit(s[i]) == 0)
        {
            printf("Usage: ./caesar key\n");//error
            return 1;
        }
        //it checks whether the ASCII value of c is between 48 and 57, inclusive.
        //This function returns a non-zero int if c is a decimal digit and 0 if c is not a decimal digit.
    }
    return 0;
}

char rotate (char c, int k)
{
    char r;
    if (isalpha(c))
    //check whether a character is alphabetical
    //returns a non-zero int if c is alphabetical
    {
        if(islower(c))
        {
            r = 'a' + (c+k-'a') % 26;
        }
        else
        {
            r = 'A' + (c+k-'A') % 26;
        }
    }
    else
    {
        r = c;
    }
    return r;
}