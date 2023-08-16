#include "main.h"
#include <stdio.h>
/**
 * main -Entry point
 * Description: this will add the sum of
 *		the even vaule sequence 4000000.
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long f = 0, f1 = 1, s;
	float total_s;

	while (1)
	{
		s = f + f1;

		if (s > 4000000)
			break;
		
		if ((s % 2) == 0)
			total_s += s;
		f = f1;
		f1 = s;
	}

	printf("%.0f\n", total_s);

return (0);
}
