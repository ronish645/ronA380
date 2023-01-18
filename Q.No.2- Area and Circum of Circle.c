#include <stdio.h>
#define PI 3.14   //Define a constant for pi.

int main()
{
    int r;   // declare a variable r using int function as it is a integer.
    printf("Enter the radius: ");    //Prompt the user to enter the radius.
    scanf("%d",&r);
    
    printf("Area of circle: %f\n",PI*r*r); //Calculate the area using formula π*r^2.
    printf("Circumference: %.1f\n",PI*2*r);  //Calculate the circumference using formula 2πr.
    // .1 to print answer with 1 decimal places.
    return 0;
}
















