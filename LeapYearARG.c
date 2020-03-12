#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, char**argv)
{
  int year=atoi(argv[1]);

    while(year <= 2100) //cycle; under or equals to 2100.
      {
         year = year + 1; //sum to continue putting next years 1 by 1.
  
    if (year%400 == 0) //conditional if belongs or not.
  
        printf("%i Is a Leap Year. \n", year);
  
      else if (year%100 == 0)
    
        printf("%i Isn't a Leap Year. \n", year);
  
      else if (year%4 == 0)
    
        printf("%i Is a Leap Year. \n", year);
      else
        printf("%i Isn't a Leap Year. \n", year);
      }
  return 0;
}
