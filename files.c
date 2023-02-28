#include <stdio.h>
#include <dirent.h>

void fileList()
{
    printf("\nListing the contents of the folder C:\\Templist\\\n");
    int counter = 0;
    DIR *directory;
    struct dirent *dir;
    directory = opendir("C:\\Templist\\.");
    if (directory)
    {
        while ((dir = readdir(directory)) != NULL)
        {
            if(strcmp(dir->d_name, ".") && strcmp(dir->d_name, ".."))
            {
                printf("%s\n", dir->d_name);
                counter++;
            }
        }
        closedir(directory);
    }
    printf("A total of %d files.\n\n", counter);
}