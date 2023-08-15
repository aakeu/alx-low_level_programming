#include "main.h"
/**
 * print_to_98 - print numbers to 98 two
 * @n:input, integert
 * Return: no return
 */
void print_to_98(int n)
{
	int g;

	if (n > 98)
		for (g = n; g > 98; g--)
			printf("%d, ", g);
	else
		for (g = n; g < 98; g++)
			printf("%d, ", g);
	printf("98\n");
}
