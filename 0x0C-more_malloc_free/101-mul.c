#include "main.h"
#include <stdlib.h>

/**
 * _print - string is move one place left and print
 * @str: string to move
 * @l: string size
 * Return: void or NULL
 */

void _print(char *str, int l)
{
	int a, b;

	a = b = 0;
	while (a < l)
	{
		if (str[a] != '0')
			b = 1;
		if (b || a == l - 1)
			_putchar(str[a]);
		a++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiple a string and char then place it in dest
 * @n: char for mutliplication
 * @num: string for multiplication
 * @num_index: the last non NULL index of num
 * @dest: mulitplication destination
 * @dest_index: the index to start the addition
 * Return: pointer to dest, or NULL for case of failure
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int c, d, m, mr, add, addrem;

	mr = addrem = 0;
	for (c = num_index, d = dest_index; c >= 0; c--, d--)
	{
		m = (n - '0') * (num[c] - '0') + mr;
		mr = m / 10;
		add = (dest[d] - '0') + (m % 10) + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	for (addrem += mr; d >= 0 && addrem; d--)
	{
		add = (dest[d] - '0') + addrem;
		addrem = add / 10;
		dest[d] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - check the argument for int digit..
 * @av: pointer to arguments
 * Return 0 if it is digit, 1 if not
 */

int check_for_digits(char **av)
{
	int e, f;

	for (e = 1; e < 3; e++)
	{
		for (f = 0; av[e][f]; f++)
		{
			if (av[e][f] < '0' || av[e][f] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - string initialized
 * @str: strng to initialized
 * @l: lenght of string
 * Return: void
 */

void init(char *str, int l)
{
	int g;

	for (g = 0; g < l; g++)
		str[g] = '0';
	str[g] = '\0';
}

/**
 * main - multiply two int.
 * @argc: arguments number
 * @argv: vector argument
 * Retunr: 0 or exit status 98, if it is failure.
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti --, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}

	}
	_print(a, ln - 1);
	return (0);
}
