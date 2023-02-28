#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "menu.h"
#include "safeinput.h"
#include "circle.h"
#include "longestword.h"
#include "files.h"

int main()
{
    int selection;
    bool running = true;
    while(running)
    {
        selection = showMenu();
        switch (selection)
        {
        case 1:
            circleCircumference();
            break;
        
        case 2:
            fileList();
            break;

        case 3:
            longestWord();
            break;

        case 4:
            printf("Exiting.\n");
            return 0;
            break;
        
        default:
            printf("Incorrect input, please try again.\n\n");
            break;
        }
    }
    
    return 1;
}