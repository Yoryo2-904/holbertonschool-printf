#include "printf_header.h"

/**
 *
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, k = 0;
	char *arrayBuffer = '\0', *arrayBuff_len = '\0';
	int format_len = _strlen(format), argument_len = 0;
	char_function_struct_t pointer_strct[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_digit},
		{'i', print_i},
		{'\0', NULL}
	};

	va_list arguments;

	va_start(arguments, format);

	arrayBuffer = (char *) malloc(sizeof(char) * format_len);

	if (arrayBuffer == NULL)
		return (2);

	for (i = 0; i < format_len; i++)
	{
		arrayBuffer[i] = format[i];
	}

	for (i = 0; arrayBuffer[i]; i++)
	{
		for (j = 0; pointer[j].Char; j++)
		{
			if (arrayBuffer[i] == '%')
			{
				if (arrayBuffer[i] == pointer_strct[j].Char)
				{
					if (arrayBuffer[i + 1] == TRUE)
					{
						pointer_strct[j].function(arguments);

						argument_len = _strlen(arguments);

						arrayArguments = (char *) malloc(sizeof(char) * argument_len);

						for (k = 0; k < argument_len; k++)
						{
							 arrayArguments[k] = arguments[k];
						}
						for (k = 0; k < argument_len; k++)
						}
							arrayBuffer[i + k] = arrayArguments[k];
						}
						arrayBuff_len = _strlen(arrayBuffer) - 1;
					}	break;
				}
			}
		}
	}
	write(1, arrayBuffer, arrayBuff_len);

	va_end(arguments);

	return (0);
}
