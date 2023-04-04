#include "main.h"
/**
* _memcpy - function that copies memory area
* @src: memory area copied
* @dest: memory area stored
* @n: the number of bytes to be copied
* Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for(; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
