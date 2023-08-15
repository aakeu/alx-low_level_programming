#include "main.h"
/**
 * _abs - print integer
 * @n: Integer %d input
 * Return: boolean vaule
 */
int _abs(int n)
{
	int r;

	if (n >= 0)
	{
		r = n;
	}
	else
	{
		r = -n;
	}

	return (r);
}
