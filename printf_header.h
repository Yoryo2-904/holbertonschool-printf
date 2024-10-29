#ifndef _PRINTF_HEADER_H_
#define _PRINTF_HEADER_H_
/*Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024  /* Definir un tamano de buffer adecuado*/
/*Structs*/
/**
 * struct char_function_struct - Associates a character with a print function.
 * @character: The character that identifies the type of data to print.
 * @function: Pointer to the function that handles the printing.
 *
 * Description: This struct associates a character with a function that
 * takes a variadic list, a string buffer, and a pointer to an integer
 * to store the length of the buffer.
 */
typedef struct char_function_struct
{
char character;
void (*function)(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
} char_function_struct_t;
/*Prototypes*/

int _strlen(const char *s);
int _printf(const char *format, ...);
void print_string(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
void print_char(va_list arguments, char *arrayBuffer, int *arrayBuff_len);
void print_digitinteger(va_list args, char *arrayBuffer, int *arrayBuff_len);

#endif
