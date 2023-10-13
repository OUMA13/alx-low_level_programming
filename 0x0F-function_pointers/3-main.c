#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as an argument.
 *
 * Return: A pointer to the function corresponding to the operator.
 */
int (*get_op_func(char *s))(int, int);

/**
 * main - Entry point of the calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", func(num1, num2));

	return (0);
}
