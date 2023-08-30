#include "main.h"

/**
 *str_checker - checking if two strings are identical.
 *@s1: address base of string 1
 *@s2: address base of string 2
 *@i: left index
 *@j: index
 * Return: 1 if s is identical, 0 other wise
 */
int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}
/**
 * wildcmp -check to see if the string is identical
 * @s1: string address base
 * @s2: string address base
 * Return: 1, if it is considered identical
 */
int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
