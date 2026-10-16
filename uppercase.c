#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "cs50.h" // includes the cs50 library for user input

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // if s[i] is a lowercase letter, convert it to uppercase
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", toupper(s[i])); // convert to uppercase using toupper function
        }
        //Else if not lowercase
        else
        {
            printf("%c", s[i]); // print the character as is if it's not lowercase
        }
    }
}