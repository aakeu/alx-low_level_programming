#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separator
 * @separator: string separator
 * @n: the number of argument
 * @...: the int to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%d%s", va_arg(ap, int),
				a ? (separator ? separator : "") : "\n");
	va_end(ap);
}

