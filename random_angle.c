#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float getRandomNumber()
{
    return 4.0;   // chosen by fair dice roll.
                  // guaranteed to be random.
}

int main(int argc, char *argv[])
{
    char *filename;
    FILE *fd;
    filename = (char *)malloc(sizeof(char) * 9);
    strcpy(filename, "angle.txt");
    fd = fopen(filename, "w");
    if (fd == NULL)
    {
        printf("File cannot be created\n");
        exit(-1);
    }
    fprintf(fd, "%f", getRandomNumber());
    fclose(fd);

    return 0;
}
