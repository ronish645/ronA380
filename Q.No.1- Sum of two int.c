#include <stdio.h>

int main()
{
  int a;     //Declaring the variables a and b and use int function because both of them are integers.
  int b;
  printf("Enter first number: ");   //Prompt the user to enter two numbers.
  scanf("%d",&a);       // we use scanf function to enter some information on the variable.
  printf("Enter second number: ");
  scanf("%d",&b);
  // Adding the two numbers and storing the result in sum of a and b variable.
  printf("Sum of a and b = %d", a+b);
  return 0;   // End the program
}
