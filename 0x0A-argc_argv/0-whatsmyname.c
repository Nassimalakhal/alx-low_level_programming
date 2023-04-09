#include <stdio.h>
/**
* main - program that prints its name followed by a new line
* @argc: the number of arguments passed
* @argv: a pointer array which points to each argument passed
* Return: always 0
*/

int __attribute__ ((unused))(int argc, char * argv[])
{

 printf("%s\n", argv[0]);
 return (0);
}
