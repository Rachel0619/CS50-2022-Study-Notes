#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text:  ");

    int letters = count_letters(text);
    float words = count_words(text); /* can't be int cus we will divide letters and sentences by words later*/
    int sentences = count_sentences(text);

    float L = letters / words * 100;
    float S = sentences / words * 100;

    int index = round(0.0588 * L - 0.296 * S - 15.8);/*Coleman-Liau index formula*/

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int count_letters (string text)
{
    int count=0;
    for (int i=0; i < strlen(text); i++)
    {
        if (isalpha(text[i]) != 0)
        {
           count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count=0;
    for (int i=0; i<strlen(text); i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }
    return count+1; /* if we have n spaces, then there is  n+1 words*/
}

int count_sentences(string text)
{
    int  count = 0;
    for (int i=0; i<strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            count++;
        }
    }
    return count;
}