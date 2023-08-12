#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of thr program
 *
 * Description: This code print double digit combination
 * from 0 to 99. They are the smallest combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num1 = 0, num2;

    while (num1 <= 99)
    {
        num2 = num1;
        while (num2 <= 99)
        {
            if (num2 != num1)
            {
                putchar((num1 / 10) + 48);
                putchar((num1 % 10) + 48);
                putchar(' ');
                putchar((num2 / 10) + 48);
                putchar((num2 % 10) + 48);

                if (num1 != 98 || num2 != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
            }
            num2++;
        }
        num1++;
    }
    putchar('\n');
    return (0);
}
