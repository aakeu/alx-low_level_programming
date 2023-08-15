#include "main.h"
/**
* _islpha - check characters lower case
* @c: input characters
* Return: boolean vaule
*/
int _isalpha(int c)
{
char pear;
int value = 0;
	for (pear = 'a'; pear <= 'z'; pear++)
	{
		if (pear == c)
		{
		value = 1;
		}
	}
	for (pear = 'A'; pear <= 'Z'; pear++)
	{
		if (pear == c)
		{
			value = 1;
		}
	}
return (value);
}
