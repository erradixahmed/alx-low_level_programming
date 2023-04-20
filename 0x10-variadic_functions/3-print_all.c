#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    va_list arg_list;
    int i = 0;
    char c, *s;

    va_start(arg_list, format);

    while (format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(arg_list, int);
                printf("%c", c);
                break;
            case 'i':
                printf("%d", va_arg(arg_list, int));
                break;
            case 'f':
                printf("%f", va_arg(arg_list, double));
                break;
            case 's':
                s = va_arg(arg_list, char*);
                if (s == NULL)
                    printf("(nil)");
                else
                    printf("%s", s);
                break;
            default:
                break;
        }

        if (format[i + 1])
            printf(", ");

        i++;
    }

    printf("\n");
    va_end(arg_list);
}
