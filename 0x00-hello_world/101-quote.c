#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point takes parameter
 * Return: Always 0 Indicates success
 */
int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 590);
	return (1);
}
