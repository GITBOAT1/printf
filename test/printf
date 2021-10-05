#include "main.h"

/**
 * _print - writes the character c to stdout 100 charcter
 * @str: The character to print
 *
 * Return: On success number os read.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _printf (char *str, ...)
{
        va_list vl;
        int  i = 0, j = 0;
        char buff[100] = {0};
        char *str_arg;

        va_start(vl, str);
        while (str && str[i])
        {
                if (str[i] == '%')
                {
                        i++;
                        switch (str[i])
                        {
                        case 'c':{
                                buff[j] = (char)va_arg(vl, int);
                                j++;
                                break;
                        }
                        case 's': {
                                str_arg = va_arg(vl, char*);
                                strcpy(&buff[j], str_arg);
                                j += strlen(str_arg);
                                break;
                        }
                        }
		}
                        else
                        {
                                buff[j] = str[i];
                                j++;
                        }
                        i++;
                }
                write(j, buff, i);
                va_end(vl);
                return (j);
}
