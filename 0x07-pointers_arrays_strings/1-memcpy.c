#include "main.h"
/**
* _memcpy - function that copies memory area
* @n: the number of bytes to be copied
* @src: memory area copied
* @dest: memory area stored
* Return: copied memory with n byted changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int j = 0;
  int i = n;

  for(; j < i; j++)
  {
    dest[j] = src[j];
    n--;
  }
    return (dest);
}
