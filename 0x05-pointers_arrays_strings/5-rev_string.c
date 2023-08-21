#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string-
 *
 * @s:
 *
 * Return: Null
*/

void rev_string(char *s)
{
	int l = strlen(s);
	int a; 
	int b;

	for (a = 0, b = l - 1; a < b; a++, b--)
	{
		char temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}


}

