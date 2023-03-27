#include <stdio.h>
#include <stdarg.h>

int _sprintf(char *str, const char *format, ...)
{
    int written = 0;
    int i = 0;

    va_list args;
    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;

            if (format[i] == 'd')
            {
                int num = va_arg(args, int);
                written += sprintf(str + written, "%d", num);
            }
            else if (format[i] == 's')
            {
                char *s = va_arg(args, char *);
                written += sprintf(str + written, "%s", s);
            }
            else
            {
                return -1;
            }
        }
        else
        {
            str[written++] = format[i];
        }

        i++;
    }

    str[written] = '\0';

    va_end(args);

    return written;
}

