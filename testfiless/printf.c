#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - prints a string with format specifiers
 * @format: the format string with format specifiers
 *
 * Return: number of characters in the final string
 */
int _printf(const char *format, ...)
{
	// Variable to keep track of the number of characters printed
	int count = 0;
	// Declare a variable to hold the list of arguments
	va_list args;
	// Initializing the variable with the last names parameter before '...'
        // Loop through the format string until the end is reached ('\0')
        while (*format != '\0')
        {
          if (*format == '%') // If '%' is encountered, indicating a format specifier
          {
              format++; // Move to the next character after '%'
              if (*format == 'c') // If the format specifier is '%c' (character)
              {
                  char c = va_arg(args, int); // Get the character argument from the list
                  putchar(c); // Print the character
                  count++; // Increment the character count
              }
