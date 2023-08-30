#include "main.h"

/**
 *factorial- print the factorial of a number
 *@n: is an int
 *Return: an int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n -1));
	}
}

