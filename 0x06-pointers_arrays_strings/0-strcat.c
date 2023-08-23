#include "main.h"
#include <stdio.h>

/**
* _stracat - function of concatanate two string together
*
* @dest: it point to destination input
* @src: it point to source input
*
* Return: resulting string (dest)
*/

char *_strcat(char *dest, char *src)
{
int dest_l = 0;
int src_l = 0;
int i;

while (dest[dest_l] != '\0')
{
dest_l++;
}

while (src[src_l] != '\0')
{
src_l++;
}

for (i = 0; i < src_l; i++)
{
dest[dest_l + i] = src[i];
}

dest[dest_l + src_l] = '\0';

return (dest);
}
