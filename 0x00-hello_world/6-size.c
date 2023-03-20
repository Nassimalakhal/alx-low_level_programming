#include<stdio.h>
/**
* main - A programm that prints the size of various types on the computer
* Return 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of char: %ld byte\n", sizeof(a));
printf("Size of int: %ld bytes\n", sizeof(b));
printf("Size of long int: %ld bytes\n", sizeof(c));
printf("Size of long long int: %ld bytes\n", sizeof(d));
printf("Size of float: %ld byte\n", sizeof(f));
return (0);
}
