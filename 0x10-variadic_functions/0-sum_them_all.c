#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the number of argument
 * @...: the int to sum
 * Return: the in to sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int p = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		p += va_arg(ap, int);
	va_end(ap);
	return (p);
}
