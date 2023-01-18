#include <stdio.h>

int main()
{
    int principle;    // declare variables principle, rate and time.
    int rate;
    int time;
    printf("Enter the principle: "); //Prompt the user to enter principle.
    scanf("%d",&principle);   //Put the value in variable
    printf("Enter the rate of interest: "); //Prompt the user to enter rate.
    scanf("%d",&rate);
    printf("Enter the time: "); //Prompt the user to enter time.
    scanf("%d",&time);
    
    printf("Simple Interest is %d\n",(principle*rate*time)/100);  /*Calculate Simple interest using formula 
    S.I = (P*T*R)/100 */
    
    return 0; //End of program
}
