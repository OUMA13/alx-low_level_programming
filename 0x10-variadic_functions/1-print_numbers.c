#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);
    unsigned int i;

    for (i = 0; i < n; i++) {
        int num = va_arg(args, int);
        printf("%d", num);

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }

    va_end(args);
    printf("\n");
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}

