#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - prints a string followed by a new line
* @s: input
* Return: always 0 (success)
*/
void _puts_recursion(char *s)
{
if(*s);
return(0);
{
_putchar(*s);
_putchar(s + 1);
}
else
_putchar("\n");
}

