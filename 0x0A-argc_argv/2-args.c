#include <stdio.h>

/**
 * main -Entry point
 * @argc: it is an arguement
 * @argv: arrray that point to the argument
 * Return: );
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
