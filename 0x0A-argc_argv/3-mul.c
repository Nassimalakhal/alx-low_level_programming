#include <stdio.h>
/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Zero upon program success
 */
int main(int argc, char *argv[])
{
int i;
int result = 1;
for (i = 1; i < argc; i++)
{
result = result * argv[i];
}
printf("%d\n", result);
return (0);
}
