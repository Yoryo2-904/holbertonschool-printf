
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>


char* _print_char(va_list arguments) {
  char* str1 = va_arg(arguments, char*);
  char* str2 = va_arg(arguments, char*);
  
  size_t len1 = strlen(str1);
  size_t len2 = strlen(str2);

  char* result = (char*)malloc(len1 + len2 + 1);
  if (result == NULL) {
    return NULL; 
  }
  /*copeo la primera cadena en la variable result:*/
  strcpy(result, str1);
  strcat(result, str2);

  return result;
}
