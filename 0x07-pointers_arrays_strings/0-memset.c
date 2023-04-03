#include "main.h"
/**
* _memset - function fills the first n bytes of the memory area
* @s: memory area
* @b: the constant byte
* @n: the first  bytes of the memory to be changed
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
  int i=0;
  for(i=0; n>0; i++);{
  s[i]=b;
  n--;
  }
  return (s);
}
