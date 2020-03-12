#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int num1, num2, num3, lowest, middle, highest;

   printf("Write number 1: ");
   scanf("%d", &num1);
   printf("Write number 2: ");
   scanf("%d", &num2);         
   printf("Write number 3: ");
   scanf("%d", &num3);

   if (num1 > num2) //condition1
   {   
      middle = num1;    
      lowest = num2;   
   } else 
   {
      middle = num2;  
      lowest = num1;  
   } 
   
   if (middle > num3) //condition2
   { 
      highest = middle;    
   
      if (lowest > num3) //condition3
      {         
         middle = lowest;                
         lowest = num3;
      }else 
      {
         middle = num3;      
      }         
   }else
   { 
      highest = num3;
   }

   printf("The lowest number is: %d\n", lowest);
   printf("The middle number is: %d\n", middle);
   printf("The highest number is: %d\n", highest);  

   return(0); 
}    