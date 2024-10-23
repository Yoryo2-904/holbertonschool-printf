#include "printf_header.h"
#include "stdio.h"

/**
 *print_char - return a character
 *@va_list : arguments
 *return : a character
 */

void print_char(va_list arguments)
{
  char c = va_arg(arguments, int);
  write(1, &c, 1);
}

/**
 *_string - return a string
 *@va_list : arguments
 *return : a string
 */

void print_string(va_list arguments)
{
  char *s = va_arg(arguments, char *);
  if (s = NULL)
    {
    write(1, s, _strlen(s));
    }
}

/**
 *_digit - return a digit
 *@va_list : arguments
 *return: a character
 */

void print_digit(va_list arguments) {
  int d = va_arg(arguments, int);
  char buffer[20];
  int length = snprintf(buffer, sizeof(buffer), "%d", d);
  write(1, buffer, length);
}
