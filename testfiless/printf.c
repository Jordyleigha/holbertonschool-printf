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
	      //If the format specifier is '%s'(string)
	      else if(*format == 's')
	      {
	        char *str = va_arg(args, char*); //getting the string argument from the list
	        while (*str != '\0') //Loop through the characters of the string
	        {
		  //print each character of the string
		  putchar(*str);
		  str++;
		  //Increment the character count
		  count++;
	  }
	}
	// If the format specifier is '%%'
	else if (*format == '%')
	{
		//print the percent sign
		putchar('%');
		//Increment the character count
		count++;
	}
        }
            else if (*format == '%') // If the format specifier is '%%' (percent symbol)
            {
                putchar('%'); // Print '%' character
                count++; // Increment the character count
            }
            format++; // Move to the next character in the format string
    }

    va_end(args); // Clean up the variable holding the arguments
    return count; // Return the total number of characters printed
}
