#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -Entry Point
 * atoi is a funtion that coverts a string to an int
 * @argc: arguments
 * @argv array that point to arguements
 * Return: 0
*/
int main(int argc, char *argv[])
{
    int j, res = 1;

    if (argc != 3)
    {
        printf("%s\n", "Error");
        return 1;
    }
    else
    {
        for (j = 1; j < argc; j++)
        {
            res *= atoi(argv[j]);
        }
        printf("%d\n", res);
    }
    return 0;
}

