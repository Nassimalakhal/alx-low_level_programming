#include "main.h"
/**
* _memcpy - function that copies memory area
* @n: the number of bytes to be copied
* @src: memory area
* @dest: memory area
* Return: change pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
  int j = 0;
  int i = n;

  for(j = 0; j < n; j++)
  {
    dest[j]=src[j];
  }
    return (dest);
}
