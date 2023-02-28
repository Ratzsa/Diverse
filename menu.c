#include <stdio.h>

int showMenu()
{
    int menuSelection;
    while(1)
    {
        printf("Main menu\n");
        printf("1. Calculate the circumference of a circle\n");
        printf("2. List all files in a folder\n");
        printf("3. Longest word\n");
        printf("4. Exit\n");
        if(GetInputInt("Selection: ", &menuSelection))
        {
            return menuSelection; // Test
        }
    }
    
}