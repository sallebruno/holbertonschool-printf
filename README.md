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
<p>
  <ul>
  <li>_printf.c:This is the core file of the project, containing the _printf function implementation. It parses the format string, identifies specifiers, and calls the appropriate functions to handle each case.</li>
  <li>functions.c:Contains implementations for various format specifiers, such as printing characters, strings, and integers. These functions are invoked by _printf as needed.</li>
  <li>main.c:This file serves as the entry point for testing the _printf function against the standard printf function. It contains a series of test cases to compare outputs, validate format specifiers, and ensure the correct handling of edge cases. </li>
  <li>main.h:The main header file for the project. It declares the prototypes of all functions used in _printf, defines macros, and includes required standard libraries.</li>
</ul>
</p>

<h2  align="center">Flow Chart</h2>
<p></p>

<h2 align="center">Return Value</h2>
<p></p>

<h2 align="center">Flag Characters Implemented</h2>
<p></p>

<h2  align="center">Examples of Use</h2>
<p></p>

<h2 align="center">Contributors</h2>
<p align="center">This project was coded by Lucas Andrada and Bruno Salle from Holbeton Uruguay cohort 25, thank you for reading. </p>
