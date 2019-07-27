#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: List of arguments.
 */

void print_all(const char * const format, ...)
{
	int l;
	char *str;
	va_list any;

	va_start(any, format);

	l = 0;
	while (format[l] != '\0')
	{
		switch (format[l])
		{
			case 'c':
				printf("%c", (char) va_arg(any, int));
				break;
			case 'i':
				printf("%d", va_arg(any, int));
				break;
			case 'f':
				 printf("%f", (float) va_arg(any, double));
				break;
			case 's':
				str = va_arg(any, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);
				break;
		}
		if ((format[l] == 'c' || format[l] == 'i' || format[l] == 'f' ||
			format[l] == 's')  && (format[l + 1] != '\0'))
		{
			printf(", ");
		}
		l++;
	}
	va_end(any);
	printf("\n");
}
