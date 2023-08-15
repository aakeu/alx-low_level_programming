#include "main.h"
/**
* _islower - check lowercase character
* @c: input character
* Return: vaules of boolean
*/
int _islower(int c)
{
char letter;
int value = 0;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
		value = 1;
		}
	}
return (value);
}
