#include "main.h"
/**
* print_alphabet - Eaa
* Return: void
*/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}

/**
* print_alphabet_x10 - Entry 10 times alphabet
* Return: void
**/

void print_alphabet_x10(void)
{
int i;
for (i = 1; i <= 10; i++)
{
print_alphabet();
}
}
