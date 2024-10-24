#include "printf_header.h"

/**
 *print_char - return a character
*@va_list : arguments
 *return : a character
 */

char *_print_char(va_list arguments)
{
  return(va_arg(arguments, char *));
}

/**
 *_string - return a string
*@va_list : arguments
 *return : a string
 */

char *_string(va_list arguments)
{
  return(va_arg(arguments, char *));
}

/**
 *_digit - return a digit
*@va_list : arguments
 *return: a character
 */
char *_digit(va_list arguments)
{
  return(va_arg(arguments, char *));
}




