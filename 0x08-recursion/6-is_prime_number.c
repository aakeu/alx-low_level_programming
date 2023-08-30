#include "main.h"

/**
 *is_prime_number- return of prime number
 *@n: an int
 *@dividor: int the divide
 *Return: Nothing
 */

int check_prime(int n, int p);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime- check the int  is < n if we can divide it
 * @n: int
 * @p: int
 * Return: int
 */

int check_prime(int n, int p)
{
	if (p >= n && n > 1)
		return (1);
	else if (n % p == 0 || n <= 1)
		return(0);
	else
		return (check_prime(n, p + 1));
}
