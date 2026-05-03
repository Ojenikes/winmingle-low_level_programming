WINMINGLE COMMUNITY SOFTWARE 
ENGINEERING TRAINING PROGRAM 
Module 1: C Programming Language — Introduction to 
Compilation and Basics 
Assignment Title/Directory: 0x00-hello_world 
Instructor: Greenfield Adolphus 
Department: WinMingle Community Software Engineering Program 
 
Objective 
This assignment introduces you to the C programming language, its compilation process, and 
basic syntax. 
 You’ll learn how to: 
●  Write simple C programs 
 
●  Compile and assemble C source files 
 
●  Understand how executables are created 
 
●  Follow clean C coding standards 
 
 
WinMingle Code Guidelines 
The WinMingle Community uses its own simple code rules: 
Each file must start with a comment block containing: 
 
 
 
 
 
 /** 
 * Author: Your Full Name 
 * Program: WinMingle Community C Training 
 * Description: Brief explanation of this file 
 */ 
 
1.  Use clear variable names (count, result, etc.) 
 
2.  Indent with 4 spaces, not tabs 
 
3.  Add meaningful comments for each function 
 
4.  Ensure your code compiles with gcc -Wall -Werror -Wextra -pedantic 
-std=gnu89 
 
 
 Repository Details For Submission 
●  GitHub Repository: winmingle-low_level_programming 
 
●  Directory: 0x00-hello_world 
 
●  Language: C 
 
 
 Tasks 
0. Preprocessor 
Mandatory 
Write a script that runs a C file through the preprocessor and saves the result into another file. 
●  The C file name will be stored in the variable $CFILE 
 
●  The output should be saved in the file c 
 
Example: 
export CFILE=main.c 
./0-preprocessor 
 
 File: 0-preprocessor 
 
1. Compiler 
Mandatory 
Write a script that compiles a C file but does not link. 
●  The C file name will be stored in the variable $CFILE 
 
●  The output file should have the same name as the C file, but with the extension .o 
 
Example: 
export CFILE=main.c 
./1-compiler 
 
 File: 1-compiler 
 
2. Assembler 
Mandatory 
Write a script that generates the assembly code of a C code and saves it in an output file. 
●  The C file name will be stored in the variable $CFILE 
 
●  The output file should have the same name but with the extension .s 
 
Example: 
export CFILE=main.c 
./2-assembler 
 
 File: 2-assembler 
 
3. Name 
Mandatory 
Write a script that compiles a C file and creates an executable named cisfun. 
●  The C file name will be stored in the variable $CFILE 
 
Example: 
export CFILE=main.c 
./3-name 
 
 File: 3-name 
 
4. Hello, puts 
Mandatory 
Write a C program that prints exactly this line, followed by a new line: 
"Programming is like building a multilingual puzzle 
 
●  Use the function puts 
 
●  Do not use printf 
 
●  Return 0 
 
 File: 4-puts.c 
 
5. Hello, printf 
Mandatory 
Write a C program that prints exactly: 
with proper grammar, but the outcome is a piece of art, 
 
followed by a new line. 
●  Use the function printf 
 
●  Do not use puts 
 
●  Must return 0 
 
●  Must compile without warnings using -Wall 
 
 File: 5-printf.c 
 
6. Size is not grandeur, and territory does not make a nation 
Mandatory 
Write a C program that prints the size of various types on your machine. 
Example output: 
Size of a char: 1 byte(s) 
Size of an int: 4 byte(s) 
Size of a long int: 8 byte(s) 
Size of a long long int: 8 byte(s) 
Size of a float: 4 byte(s) 
 
 File: 6-size.c 
 
7. Intel 
Advanced 
Write a script that generates the assembly code (Intel syntax) of a C code and saves it to an 
output file. 
Example: 
export CFILE=main.c 
./100-intel 
 
 File: 100-intel 
 
8. UNIX is basically a simple operating system, but you have to be a genius 
to understand the simplicity 
Advanced 
Write a C program that prints exactly: 
and that piece of art is useful" - Dora Korpar, 2015-10-19 
 
to the standard error. 
●  Do not use printf or puts 
 
●  Your program should return 1 
 
●  Compile without warnings using -Wall 
 
 File: 101-quote.c 
 
 
 
Submission 
●  Push your solutions to GitHub under the repository: 
winmingle-low_level_programming 
●  Directory name in repo: 0x00-hello_world 
 
Note: Commit each file with a descriptive message 
 Example: 
 
 git add 4-puts.c 
git commit -m "Add program that prints message using puts" 
git push 
 
 
 
Note: all files should be inside the 0x00-hello_world directory inside the winmingle-low_level_programming. 

