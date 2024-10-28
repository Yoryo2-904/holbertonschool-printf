#include "printf_header.h"

/**
 * print_string - concatenates and save a variadic list with a buffer
 * and recives the length of the buffer
 * @arguments: the variadic list
 * @arrayBuffer: the buffer
 * @arrayBuff_len: the buffer's length
 *
 */

void print_string(va_list arguments, char *arrayBuffer, int *arrayBuff_len)
{
	int i = 0;
	char *argument = NULL;

	argument = va_arg(arguments, char *)

	for (i = 0; argument[i]; i++)
	{
		arrayBuffer[*arrayBuff_len] = argument[i];
		(*arrayBuff_len)++;
	}
}

/**
 * print_char - concatenates and save a variadic list with a buffer
 * and recives the length of the buffer
 * @arguments: the variadic list
 * @arrayBuffer: the buffer
 * @arrayBuff_len: the buffer's length
 *
 */
void print_char(va_list arguments, char *arrayBuffer, int *arrayBuff_len)
{
	char c = va_arg(arguments, char);
	arrayBuffer[*arrayuff_len] = c;
	(*arrayuff_len)++;
}

/**
 * print_digitinteger - concatenates and save a variadic list with a buffer
 * and recives the length of the buffer
 * @arguments: the variadic list
 * @arrayBuffer: the buffer
 * @arrayBuff_len: the buffer's length
 *
 */
void print_digitinteger(va_list arguments, char *arrayBuffer, int *arrayBuff_len) 
{
	int num = va_arg(arguments, int), i = 0;
	char temp[12];

	if (num < 0) {
	  arrayBuffer[(*arrayBuff_len)++] = '-';
	  num = -num;
	}

	do {
	  temp[i++] = (num % 10) + '0';
	  num /= 10;
	} while (num > 0);

	for (int j = i - 1; j >= 0; j--) {
	  arrayBuffer[(*arrayBuff_len)++] = temp[j];
	}
}
