#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap_two_nums(int *a, int *b) //instructions to swap the numbers
{ 
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
int num1 = 5; //variables declaration
int num2 = 10;

    printf("The first number is: %d\n The second number: %d\n", num1, num2);

        swap_two_nums(&num1, &num2);
    
    printf("Now, the first number is: %d\n The second is: %d\n", num1, num2);

	return(0);
}
	
