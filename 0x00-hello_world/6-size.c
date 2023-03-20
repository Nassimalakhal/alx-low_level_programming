#include<stdio.h>
/**
* main - A programm that prints the size of various types on the computer
* Return: Always 0 (Success)
*/
int main(void)
{
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int : %zu bytes\n", sizeof(longintType));
printf("Size of long long int : %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
return (0);
}


