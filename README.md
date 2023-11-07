  ![header](https://capsule-render.vercel.app/api?height=400&text=Our%20Printf%20project&desc=by%20Jordan%20Arguelles%20and%20Ivonne%20Lopez)

<h2 align="center">Understanding the _printf Function and Conversion Specifiers<b></h2>

  <h3><span>Introduction</span></h3>
  
In this project, we've utilized the _printf function, a custom implementation of the standard C printf function. This function allows precise control over the formatting of output. We'll get into this code and understand how it works, along with the our assigned conversion specifiers employed for different types of output.

<h3><span>Understanding Conversion Specifiers:</span></h3>

%c - Character Specifier:
Usage: %c is used to format and print a single character.
Example: If you have a variable char letter = 'A';, using _printf("Character: %c", letter); will output: Character: A.

%s - String Specifier:
Usage: %s is used to format and print a string of characters (a sequence of characters).
Example: If you have a string variable char *name = "John";, using _printf("Name: %s", name); will output: Name: John.

%% - Percent Specifier:
Usage: %% is an escape sequence used to print a literal percent symbol.
Example: Using _printf("Discount: 20%%"); will output: Discount: 20%.
 Understanding the Code Flow:

<h3><span>Initialization:</span></h3>

The function begins by checking if the format string is not null.
It initializes essential variables, including a va_list named args, which is used to handle the variadic arguments provided to the function.

<h3><span>Processing the Format String:</span></h3>

The code iterates through the format string character by character.
When a % symbol is encountered, it checks the character following % to determine the type of conversion specifier.
If it's %c, the function prints the corresponding character from the argument list.
If it's %s, it prints the string from the argument list.
If it's %%, it prints a literal percent symbol.

<h3><span>Printing Other Characters:</span></h3>

For characters other than %, the function prints them as is.
Counting Characters and Return:
The function keeps track of the total count of characters printed.
After processing the entire format string, it returns the total count.

<h3><span>Conclusion:</span></h3>























![Beige Colorful Minimal Flowchart Infographic Graph (US Letter)](https://github.com/Jordyleigha/holbertonschool-printf/assets/144151209/1d543179-1efb-4194-98ac-8dfef75dc4c4)
