#include "main.h"
#include <stdlib.h>
/**
* create_array - function that creates an array of chars
* @size: the size of the memory to print
* @c: storaged char
* Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
char *cr;
unsigned int i;
if (size == 0)
return (NULL);
cr = malloc(sizeof(c) * size);
if (cr == NULL)
return (NULL);
for (i = 0; i < size; i++)
cr[i] = c;
return (cr);
}
