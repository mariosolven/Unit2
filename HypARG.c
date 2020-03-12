#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
float hyp; //hypotenuse declaration.

float legA=atof(argv[1]);
float legB=atof(argv[2]);
float squareA = (legA*legA); //squared first number.
float squareB = (legB*legB); //squared second number.
float sum = (squareA+squareB); // sum of squares.
        hyp = sqrt(sum); // sum is getting their square root.
    printf("%f\n",hyp);
return 0;
}

