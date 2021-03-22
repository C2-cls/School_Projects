/* Program to create a basic calculator with basic features
 of addition and subtraction*/

#include <stdio.h>

int main(void)
{
	char operator;					//Initialize all variable to be used
	int num1, num2, result = 0;		//Initialize result with a starting value of zero


	printf("Enter number 1: ");
	scanf_s("%i", &num1);

	printf("\nEnter an operator (+ or -) : ");
	scanf_s(" %c", &operator,3);	//scanf depreciated, used scanf_s; included buffer amount '3'

	printf("\nEnter number 2: ");
	scanf_s("%i", &num2);

	switch (operator)				// Use switch function to evaluate operator characters
	{
	case '+':
		result = num1 + num2;
		break;						// Add break; statements to all switch cases
	case '-':
		result = num1 - num2;
		break;
	default:						// default case will prevent division operation. Add division by zero protection in next generation.
		printf("Invalid input");
		break;
	}
	printf("\nResult: %i %c %i = %i\n", num1, operator, num2, result);
	return 0;
}