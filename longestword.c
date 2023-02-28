#include <stdio.h>
#include <string.h>

void longestWord()
{
    char inputWord[1000];
    char longestWord[1000];
    int longestLength = 0;

    printf("Type in multiple words. End with an empty word.\n");
    while(1)
    {
        fgets(inputWord, 1000, stdin);
        if(inputWord[0] == '\n')
        {
            break;
        }
        
        inputWord[strcspn(inputWord, "\n")] = 0;

        if(strlen(inputWord) > strlen(longestWord))
        {
            strcpy(longestWord, inputWord);
            longestLength = strlen(inputWord);
        }
    }
    printf("Your longest word was %s at %d letters.\n", longestWord, longestLength);

    return;
}