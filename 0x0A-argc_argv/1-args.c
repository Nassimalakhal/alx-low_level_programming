#include <stdio.h>
/**
* main -  program that prints the number of arguments passed into it
* @argc: the number of arguments passed to the program
* @argv: array of strings
* Return: always 0.
*/
int main (int argc, char *argv[])
{
  int count;

  printf ("hello \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("hello, world.\n");
    }

  return 0;
}
