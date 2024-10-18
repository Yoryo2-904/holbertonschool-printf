#include "printf_header.h"

/**
 *print_char - return a character
 */

char *_print_char(va_list arguments)
{
  return(va_arg(arguments, char *));
}

/**
 *_string - return a string
 */

char *_string(va_list arguments)
{
  return(va_arg(arguments, char *));
}

/**
 *_digit - return a digit
 */
char *_digit(va_list arguments)
{
  return(va_arg(arguments, char *));
}


/**
 *_integer - return a integer
 */

char *_integer(va_list arguments)
{
  return(va_arg(arguments, char *));
}

