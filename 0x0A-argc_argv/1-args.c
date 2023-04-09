#include <stdio.h>
/**
* main -  program that prints the number of arguments passed into it
* @argc: the number of arguments passed to the program
* @argv: array of strings
* Return: always 0.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc + 1);

	return (0);
}
