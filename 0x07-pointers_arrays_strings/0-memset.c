#include "main.h"
/**
* _memset - function fills the first n bytes of the memory area
* @s: memory area
* @b: the constant byte
* @n: the first  bytes of the memory to be changed
* Return: number of bytes to be changed
*/
char *_memset(char *s, char b, unsigned int n)
{
  int i = 0;
  for(; n > 0; i++){
  s[i] = b;
  n--;
  }
  return (s);
}
