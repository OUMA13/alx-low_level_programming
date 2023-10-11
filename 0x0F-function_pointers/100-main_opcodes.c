#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main  check the code for The school students
 * @agrc: the number of args
 * @args: argument vecto
 *
 * Return: Always 0.
 */
int main(int argc, char **agrv)
{
	char *p = (char *)main;
	int b;
	
	if (argc != 2
		printf("Error\n"),exit(1);
	b = atoi(argv[1]);
	if (b < 0)
	        pritf("Error\n"), exit(2);

	while (b--)
                printf("%02hx%s", *p++, b ? " " : "\n"):
	return (0);
}	
