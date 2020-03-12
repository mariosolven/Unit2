#include <stdio.h>
#include <string.h>
#include <math.h>

//The same process as the "AddTwoInt.c", just that here we substract.
int rest_two_int(int x,int y)
{
return x-y;
}

int main (int argc, char** argv)
{
int  num1=atoi(argv[1]);
int  num2=atoi(argv[2]);

printf("The rest is: %d\n",rest_two_int(num1,num2)); 

return 0;
}