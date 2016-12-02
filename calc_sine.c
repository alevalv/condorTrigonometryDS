#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265

int main(int argc, char *argv[])
{
    double val;
    float input;
    char *filename;

    FILE *fd;

    filename = (char *)malloc(sizeof(char) * 9);
    strcpy(filename, "angle.txt");
    fd = fopen(filename, "r");
    if (fd == NULL)
    {
        printf("File does not exist\n");
        exit(-1);
    }
    fscanf(fd, "%f", &input);
    fclose(fd);

    val = pow(sin(180/input), 2);
    filename = (char *)malloc(sizeof(char) * 14);
    strcpy(filename, "sineresult.txt");
    fd = fopen(filename, "w");
    if (fd == NULL)
    {
        printf("File can not be created\n");
        exit(-1);
    }
    fprintf(fd, "%f", val);
    fclose(fd);

    return 0;
}