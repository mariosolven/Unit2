/////////////////////////
// CONCEPTS
////////////////////////

//A computer program  are instructions that a computer perform 
//in order to achieve a specific task. 

/* TYPE OF PROGRAMMING LANGUAGES */

//HIGH LEVEL LANGUAGE
//Programming friendly language, portable and can run on any platform. 
//Ex. C++, Java, Pascal, Python, Visual Basic.

//LOW LEVEL LANGUAGE
//Machine friendly language, complex, non-portable and it can only run of machines. 
//Ex. Machine code, Assembly language.

////////////////////////
//C LANGUAGE
////////////////////////

//Is the programming language that most programmers will ever use.
//This doesn’t mean that is the easier to use/understand. 
//Let’s talk about its structure.

/* HEADERS */
//Are the files that tell the compiler how to call some functionality.
//The default header file that comes with the C compiler is:
#include <stdio.h> //Standard Input/Output functions.
//another ones:
#include <stdlib.h> //Standard Utility functions.
#include <string.h> //String handling functions.

/* LIBRARIES */
//Is the place where the actual functionality is implemented.
//"libm.lib", "libmmd.lib", "libmmd.dll" are some of the math libraries.

/* VARIABLES */
//Is the name given to a storage area that our programs can manipulate.
char //Character. Character, idependent or part of a chain.
int //Whole number. Used in counters, bucles control.
float //Until 6 decimals, also admit integers.
double//Until 14 decimals, also admit integers.
long //Same as "int" but with a higher range.

/* PARTS OF THE C PROGRAM */
#include <stdio.h> //First goes the header, here tells to the C compiler to include "stdio.h" file.

int main() //This is the main function where then the program execution begins.
{   //To open a bracket indicates the beginning of any function in the program.
   /*myfirstCprogram*/   //This is ignored. Is just to add additional comments in the program (like this one).
   printf("Hello, World! \n"); //Fuction that causes "Hello, World!" to be displayed on the screen.
   
   return 0; //It terminates the main() function and returns the value 0.
} //This indicates the end of the function.

/* RESERVED WORDS */
//There are 32 and they have their predefined meaning and cannot be used as a variable name.
//some of them are:
if, else, switch //Used for decision control programming structure.
for, while, do //Types of loop structures in C.
void //One of the return type.

/* IDENTIFIERS */
//refers to name given to entities such as variables, functions, structures etc.
int money; //"money", for example.
double accountBalance; //"accountBalance", another one.

/* CONSTANTS */
//Const keyword
const int  value = 10; //Used when you want to define a variable whose value cannot be changed.
//#Define
#define value 10 //preprocessor directive, it must be defined at the beginning of the program.

/* OPERATORS */
//Performs mathematical operations. 
//The most used are:
+, -, *, /, % //arithmetic operators.
<, >, <=, >=, ==, != //relational operators.
&&, ||, !, //logical operators.

/* PUNCTUATION MARKS */
//They organize a program text to defining the tasks 
//that the compiler or the compiled program carries out.
( ), [ ], { }, *, :, =, ;, ..., #. //Punctuators

//////////////////////////////////////////////
// TYPE OF ERROR IN COMPUTER PROGRAMS
/////////////////////////////////////////////

/* SYNTAX ERROR */
//Occurred when it violates the rule of C writing techniques or syntaxes.
#include<stdio.h>
main() {
   printf("Hello World")    //Here needs a semi-colon after the parenthesis.
}
//Output: Error] expected ';' before '}' token

/* RUNTIME ERROR */
//Occurred when the program is executing.
//THIS IS NOT A COMPILATION ERROR.
// Output: Program crashes during runtime.

/* LOGICAL ERROR */
//Occurred when we don't get the desired output.

/* SEMANTIC ERROR */
//Occurs when it is syntactically correct but has no meaning.
#include<stdio.h>

main() {
   int x, y, z;
   x = 10;
   y = 20;
   x + y = z;
}

// Output: [Error] lvalue required as left operand of assignment.