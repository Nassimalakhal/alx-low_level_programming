#include "main.h"
/**
* print_alphabet_x10 - Entry 10 times alphabet
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


void print_alphabet_x10(void)
{
int i;
for (c=1; c <=10; c++)
 {
  print_alphabet();
  print("\n");
 }
}

