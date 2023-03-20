#include<stdio.h>
/**
* main - A programm that prints the size of various types on the computer
* Return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %ld byte\n", (unsigned long)sizeof(a));
printf("Size of int: %ld bytes\n", (unsigned long)sizeof(b));
printf("Size of long int: %ld bytes\n", (unsigned long)sizeof(c));
printf("Size of long long int: %ld bytes\n", (unsigned long)sizeof(d));
printf("Size of float: %ld byte\n", (unsigned long)sizeof(f));
return (0);
}