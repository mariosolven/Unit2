
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char**argv)
{
int x; 
int mult = 0;
int num = atoi(argv[1]);

    for (x = 1; x < num; x++) //variables and cycle.
    {
        if(num%x == 0) //conditional1
        {
        
            mult ++;
        
        }
    }
        if(mult == 1) //conditional2 for the multiplication
        {
            printf("%d Is a Prime number. ", num);
        }else
        {
            printf("%d Isn't a Prime number. ",num);
        }
return 0;
}
