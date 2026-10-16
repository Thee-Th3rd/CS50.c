#include "cs50.h"
#include <stdio.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];
    people[0].name = "Alice";
    people[0].number = "+254-712-345-678";
    people[1].name = "Bright";
    people[1].number = "+254-712-345-679";
    people[2].name = "Charlie";
    people[2].number = "+254-712-345-680";
    string numbers[] = {"+254-712-345-678", "+254-712-345-679", "+254-712-345-680"};

    string name = get_string("Enter a name to search for: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}