#include <stdio.h>
/**
 * main - Entry point takes parameter
 * Return: Always 0 Indicates success
*/
int main(void)
{
	int i;
	char c;
	float f;

	printf("Size of a char: %lu bytes(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", sizeof(f));
	return (0);
}
