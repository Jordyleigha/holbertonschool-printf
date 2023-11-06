#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Custom data structure to represent the format specifier */
typedef struct {
    char spec;  /* Format specifier character ('c', 's', or '%') */
    int (*func)(va_list);  /* Function pointer for the corresponding print function */
} FormatSpecifier;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _putchar(char c);

#endif /* MAIN_H */
