<h1  align="center">¡¡Building Our Own Printf!!</h1>
<p align="center">This project aims to recreate the functionality of the printf function from the C standard library. It is a learning opportunity to dive deep into input/output handling in C, practice variadic functions, and explore how formatted output works in low-level programming. By building this function from scratch, we reinforce fundamental programming concepts and modular design.</p>

<h2 align="center">PrintF Description</h2>
<p align="center">This implementation of printf replicates the behavior of the standard library function while allowing customization and learning. The function takes a format string and optional arguments, processes them, and produces formatted output to the standard output (stdout). It handles various format specifiers and ensures precise control over the output.</p>
  
<h2  align="center">What We're Working With</h2>  
<p align="center">The project is divided into modular components, ensuring readability and maintainability.
<ul>
  <li>Editors: We were allowed to use only vi, vim, or emacs for writing the code, so wwe stick to vi.</li>
  <li>Compiler: We compiled using gcc with some strict flags (-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format).</li>
  <li>File Formatting: Each file concludes with a clean, single newline for proper formatting.</li>
  <li>Code Style: The project adheres to the Betty style guide, validated with betty-style.pl and betty-doc.pl.</li>
  <li>Coding Practices: Global variables were avoided where possible, and files were kept organized with a maximum of 5 functions each to ensure clarity and modularity.</li>
  <li>Testing Environment: A main.c file was used for testing purposes. Please note that any modifications made for personal testing should not be pushed, as your version may differ from ours.</li>
</ul>
</p>

<h2  align="center">Files Description</h2>
<p align="center">
  <ul>
  <li>_printf.c:This is the core file of the project, containing the _printf function implementation. It parses the format string, identifies specifiers, and calls the appropriate functions to handle each case.</li>
  <li>functions.c:Contains implementations for various format specifiers, such as printing characters, strings, and integers. These functions are invoked by _printf as needed.</li>
  <li>main.c:This file serves as the entry point for testing the _printf function against the standard printf function. It contains a series of test cases to compare outputs, validate format specifiers, and ensure the correct handling of edge cases. </li>
  <li>main.h:The main header file for the project. It declares the prototypes of all functions used in _printf, defines macros, and includes required standard libraries.</li>
</ul>
</p>

<h2  align="center">Flow Chart</h2>
<p align="center">
  <img src="https://raw.githubusercontent.com/sallebruno/holbertonschool-printf/main/printf_flowchart.jpeg" alt="Flowchart of _printf" style="max-width: 100%; height: auto;">
</p>

<h2 align="center">Return Value</h2>
<p align="center"> This function returns an integer representing the number of characters successfully printed. If an error occurs, the function will return -1.

Example: Calling `_printf("Example output.");` would display `Example output.` and return `15`.

Error Example: Calling `_printf("%");` would result in a return value of `-1`.</p>

<h2 align="center">Flag Characters Implemented</h2>
<p align="center">
  | Flag Character | Usage                  |
|----------------|------------------------|
| `c`            | Prints a single character. |
| `s`            | Prints a string.            |
| `%`            | Prints the literal `%` character. |
| `d`            | Prints an integer in decimal format. |
| `i`            | Prints an integer in decimal format. |
</p>

<h2  align="center">Examples of Use</h2>
<p align="center"> Below are some examples demonstrating how to use the <code>_printf</code> function, along with the expected output and return values:</p>
<h4>Printing a String</h4>
<pre><code>
_printf("Hello, Holberton!\n");
</code></pre>
<p><strong>Output:</strong> <br> Hello, Holberton! <br> <strong>Return Value:</strong> 17 (number of characters printed, including the newline)</p>

<hr>

<h4>Printing a Character</h4>
<pre><code>
_printf("The first letter is: %c\n", 'H');
</code></pre>
<p><strong>Output:</strong> <br> The first letter is: H <br> <strong>Return Value:</strong> 24</p>

<hr>

<h4>Printing Integers</h4>
<pre><code>
_printf("This is an integer: %d\n", 42);
</code></pre>
<p><strong>Output:</strong> <br> This is an integer: 42 <br> <strong>Return Value:</strong> 24</p>

<pre><code>
_printf("Negative number: %i\n", -123);
</code></pre>
<p><strong>Output:</strong> <br> Negative number: -123 <br> <strong>Return Value:</strong> 26</p>

<hr>

<h4>Printing a Literal Percentage Sign</h4>
<pre><code>
_printf("100%% sure!\n");
</code></pre>
<p><strong>Output:</strong> <br> 100% sure! <br> <strong>Return Value:</strong> 13</p>

<hr>

<h4>Handling Unsupported Specifiers</h4>
<pre><code>
_printf("Unknown: %r\n");
</code></pre>
<p><strong>Output:</strong> <br> Unknown: %r <br> <strong>Return Value:</strong> 12</p>

<hr>

<h4>Error Example</h4>
<pre><code>
_printf("%");
</code></pre>
<p><strong>Return Value:</strong> -1 (indicates an error due to incomplete format specifier)</p>

<h2 align="center">Contributors</h2>
<p align="center">This project was coded by Lucas Andrada and Bruno Salle from Holbeton Uruguay cohort 25, thank you for reading. </p>
