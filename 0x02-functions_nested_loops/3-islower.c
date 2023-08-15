#include "main.h"
/**
* _islower - check lower case character
* input character
* Return: boolean 
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
