#include <stdio.h>
#include <string.h>
#include <math.h>

int add_two_int(int x,int y) //Sum of two numbers variables declaration.
{
return x+y;
}

int main (int argc, char** argv) //argument COUNT and argument VECTOR.
{
    int  num1=atoi(argv[1]); //In both "argv" tooks the entered value.
    int  num2=atoi(argv[2]);

printf("The sum is: %d\n",add_two_int(num1,num2));

return 0;
}
