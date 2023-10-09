#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
    {
        _puts("Error");
        exit(98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    multiply_and_print(num1, num2);

    return (0);
}

/**
 * is_positive_number - Check if a string is a positive number
 * @str: The string to check
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return (0);
        str++;
    }
    return (1);
}

/**
 * multiply_and_print - Multiply two positive numbers and print the result
 * @num1: The first number as a string
 * @num2: The second number as a string
 */
void multiply_and_print(char *num1, char *num2)
{
    int len1 = _strlen(num1);
    int len2 = _strlen(num2);
    int len_result = len1 + len2;
    int *result = malloc(sizeof(int) * len_result);
    int i, j, carry, prod;

    if (result == NULL)
    {
        _puts("Error");
        exit(98);
    }

    _memset(result, 0, len_result * sizeof(int));

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i + j + 1] += carry;
    }

    for (i = 0; i < len_result; i++)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
}

/**
 * _strlen - Calculate the length of a string
 * @s: The input string
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int len = 0;

    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * _memset - Fill memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte
 * @n: Number of bytes to fill
 */
void _memset(void *s, int b, size_t n)
{
    char *ptr = s;

    while (n--)
        *ptr++ = (char)b;
}

/**
 * _puts - Print a string to stdout
 * @str: The input string
 */
void _puts(char *str)
{
    while (*str)
        _putchar(*str++);
}
