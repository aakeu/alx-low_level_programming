#include "main.h"
#include <stdio.h>

/**
 * isLower - determine if the asscii letter is  lowercase letters
 * is_seperate - determine the Asscii demiliter
 * @c: character
 *
 * Return: 1 if true.
 */

char *leet(char *str)
{
	int p;
	int q;

	char leet_chars[] = "AEOTL";
	char leet_replacement[] = "43071";

	for (p = 0; str[p] != "\0"; p++)
	{
		for (q = 0; leet_chars[q] != "\0"; q++)
		{
			if (str[p] == leet_chars[q] || str[p] == leet_chars[q] + 32)
			{ 
				str[p] = leet_replacement[q];
				break;
			}
		}
	}
	return str;
}
