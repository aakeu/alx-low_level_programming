#include "main.h"
#include <stdio.h>

/**
 * isLower - determine if the asscii letter is  lowercase letters
 * is_seperate - determine the Asscii demiliter
 * @c: character
 *
 * Return: 1 if true.
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);

}


char isDelimiter(char c)
{
	int p;
	char delimiter[] = " \t\n,!?\"(){}";

	for (p = 0; p < 12; p++)
		if (c == delimiter[p])
			return (1);
	return (0);

}
