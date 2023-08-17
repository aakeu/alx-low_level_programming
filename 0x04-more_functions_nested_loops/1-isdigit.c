#include "main.h"
#include <stdio.h>

/**
 * _isdigit- return 1 when it is a digit between 0 to 9
 *
 * @c: is a figure
 *
 * Return: 1 only when c is digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
