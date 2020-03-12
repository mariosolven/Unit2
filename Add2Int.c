#include <stdio.h>

int num1,num2,sum,times; //variables declaration
int main(){
	printf("Write the first number: ");
	scanf("%d",&num1);
	printf("Write the second number: ");
	scanf("%d",&num2);
		sum=num1+num2; //sum operation
	printf("\n The sum of that numbers is: %d",sum);
		times=num1*num2; //multiplication operation
	printf("\n The multiplication of that numbers is: %d \n",times);
return 0;
}
