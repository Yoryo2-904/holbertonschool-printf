#ifndef _PRINTF_HEADER_H_
#define _PRINTF_HEADER_H_
/*Libraries*/
/*structs*/

/**
 * 
 *
 * 
 * 
 */
typedef struct char_function_struct_t
{
  char a;
  char *(*f)(va_list);
} 
/*Prototypes*/

int _strlen(char *s);
int _printf(char *format);
#endif
