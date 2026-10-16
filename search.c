#include <stdio.h>
#include "cs50.h"
/*Topic: Algorithm 
subtopic: linear search_numbers*/
int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Enter a number to search for: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}