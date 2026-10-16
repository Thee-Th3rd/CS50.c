#include "cs50.h"
#include <stdio.h>
#include <string.h>
/*Topic: Algorithm
subtopic: linear search_string*/

int main(void)
{ 
    string strings[] = {"battleships", "boots", "cannon", "cannonball", "catapult", "cannonade"};

    string s = get_string("Enter a string to search for: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
   printf("Not found\n");
   return 1;
}