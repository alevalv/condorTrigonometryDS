#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[])
{
    float sine, cosine;
    char *sineFilename, *cosineFilename;
    FILE *fd;
    sineFilename = (char *)malloc(sizeof(char) * 14);
    strcpy(sineFilename, "sineresult.txt");
    fd = fopen(sineFilename, "r");
    if (fd == NULL)
    {
        printf("File does not exist\n");
        exit(-1);
    }
    fscanf(fd, "%f", &sine);
    fclose(fd);

    cosineFilename = (char *)malloc(sizeof(char) * 16);
    strcpy(cosineFilename, "cosineresult.txt");
    fd = fopen(cosineFilename, "r");
    if (fd == NULL)
    {
        printf("File does not exist\n");
        exit(-1);
    }
    fscanf(fd, "%f", &cosine);
    fclose(fd);

    printf("%f\n", sine + cosine);

    return 0;
}