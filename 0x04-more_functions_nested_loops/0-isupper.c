#include "main.h"

/**
 *_isupper - verify if c is uppercase letter
 *
 *@c: ABC input
 *
 * Return: 1 only if it is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}

}



