#include <stdio.h>
int main()
{
    printf("Hello, World!\n");
    printf("My age is %d", 25);
    
    return 0;
}

// This program demonstrates the use of the printf function to display text and formatted output in C. The first printf statement prints "Hello, World!" followed by a newline character. The second printf statement uses a format specifier %d to print an integer value, which in this case is 25.

// When you run this program, it will output:
// Hello, World!
// My age is 25
// The printf function is a powerful tool for formatting output in C. It allows you to include variables and control the format of the output using format specifiers. In this example, %d is used to indicate that an integer value will be printed. You can use other format specifiers for different data types, such as %f for floating-point numbers and %s for strings.
// to print a new line, we use the escape sequence \n. This tells the program to move the cursor to the next line after printing the current line.
// to print text, enclose the text in double quotes. For example, "Hello, World!" is a string literal that will be printed as is. You can also include variables in the output by using format specifiers and providing the corresponding values as arguments to printf.
// %d or %i is used for integers, %f for floating-point numbers, %s for strings, and %c for characters. You can also use other format specifiers for different data types, such as %u for unsigned integers and %x for hexadecimal values.
// main is the entry point of the program. It is where the execution starts. The return type of main is int, which indicates that the program will return an integer value to the operating system upon completion. In this case, we return 0 to indicate that the program executed successfully. if you want to return a different value, you can do so by changing the return statement. For example, returning 1 could indicate an error or a specific condition that occurred during the execution of the program.
// every executable C program must have a main function, as it serves as the starting point for the program's execution. The main function can also take arguments, such as command-line arguments, which can be accessed using parameters like argc and argv. However, in this simple example, we are not using any command-line arguments, so we simply define main without parameters.
// the name main is a convention in C programming, and it is recognized by the compiler as the entry point of the program. You can technically name the main function something else, but it is not recommended as it may lead to confusion and is not standard practice. It is best to stick with the convention of using main for the entry point of your C programs.

// .c is the file extension for C source files. When you compile a C program, you typically use a compiler like gcc or clang, which takes the .c file as input and produces an executable file. For example, if you have a file named printf.c, you can compile it using the command:
// gcc printf.c -o printf
// .h is the file extension for C header files. Header files typically contain declarations of functions, macros, and data types that can be shared across multiple source files. In this example, we include the stdio.h header file, which contains the declaration of the printf function and other standard input/output functions. By including stdio.h, we can use the printf function in our program without having to define it ourselves.

// this is a single-line comment in C. It is used to add explanations or notes to the code. Anything following the // on the same line will be ignored by the compiler. You can use single-line comments to provide brief explanations or to temporarily disable a line of code for testing purposes.
///* This is a multi-line comment in C. It can span multiple lines and is used for longer explanations or to comment out blocks of code. Anything between the /* and */ will be ignored by the compiler. Multi-line comments are useful for providing detailed explanations or for temporarily disabling larger sections of code during development. */

// a programming language is a formal language that consists of a set of instructions that can be used to produce various kinds of output. C is a general-purpose programming language that was developed in the early 1970s by Dennis Ritchie at Bell Labs. It is widely used for system programming, embedded systems, and application development due to its efficiency and low-level access to memory. C provides a rich set of features, including pointers, structures, and a powerful standard library, making it a versatile language for a wide range of programming tasks.

// an alogorithm is a step-by-step procedure or set of rules for solving a specific problem or performing a specific task. It is a well-defined sequence of instructions that takes an input and produces an output. Algorithms can be expressed in various forms, such as natural language, pseudocode, or programming languages. They are fundamental to computer science and are used to design efficient solutions to problems, optimize performance, and ensure correctness in software development.

// a syntax is the set of rules that defines the structure and format of a programming language. It specifies how code should be written and organized to be valid and understandable by the compiler or interpreter. Syntax includes rules for writing statements, expressions, declarations, and other constructs in a programming language. For example, in C, the syntax for a function declaration includes the return type, function name, parameter list, and body enclosed in curly braces. Adhering to the correct syntax is essential for writing code that can be successfully compiled and executed.

// a compiler is a software tool that translates source code written in a programming language into machine code or an intermediate representation that can be executed by a computer. The compiler takes the human-readable source code and converts it into a format that the computer can understand and execute. In the case of C, the compiler takes the .c source file and produces an executable file that can be run on the target platform. Compilers perform various tasks, such as syntax analysis, optimization, and code generation, to produce efficient and correct executable code. there are four main stages in the compilation process: preprocessing, compilation, assembly, and linking. During preprocessing, the compiler handles directives such as #include and #define. In the compilation stage, the source code is translated into assembly language. The assembly stage converts the assembly code into machine code, and finally, the linking stage combines object files and libraries to create the final executable.

//CHAPTER 2: VARIABLES AND DATA TYPES

// variables are like container that can hold different types of data. They are used to store and manipulate information in a program. In C, you need to declare a variable before using it, specifying its type and name. 