#include <stdio.h>

int main()
{
    int temp_in_cen;  //declare the variables and using int function as the varaibale will contain integers.
    int temp_in_fah;
    printf("Enter temp in centigrade: "); //Prompt the user to enter temp in centigrade.
    scanf("%d",&temp_in_cen); //Put the value in variable.
    
    printf("Answer: %f\n",(1.8*temp_in_cen)+32);    /* Calculate using formula c/100 = (F-32)/180; equals to
    (1.8*C) + 32 = F */
    
    return 0; //End of program
}
