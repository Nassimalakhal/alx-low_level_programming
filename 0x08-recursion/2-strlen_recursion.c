#include "main.h"
/**
* _strlen_recursion - function that returns the length of a string
* @s: input 
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
if (*s)
{
longit++;
longit += _strlen_recursion(s + 1);
}
return (longit);
}
