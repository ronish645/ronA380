#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5,sum; //Declare the variables.
    float percentage;
    float total;
     
    printf("Enter 5 digits: ");  //Prompt the user to enter information.
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("Enter assumption total number: ");  // Prompt the user to enter assumption number.
    scanf("%f", &total);
    sum = num1 + num2 + num3 + num4 + num5; // Perform the operation
    printf("Sum of digits: %d\n", sum);
    
    
    percentage = (sum / total) * 100;
    printf("Percentage: %.2f%%", percentage);  /* Calculate using formula percentage = sum/total, 
    .2 to print answere with two decimal places*/
    
    return 0; //End of program
}
