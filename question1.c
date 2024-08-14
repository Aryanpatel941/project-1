#include<stdio.h>
main() 
{
	// Question 1
	float celsius ,fahrenheit;
	printf(" enter the temperature in celsius :");
	scanf("%f", &celsius);
	fahrenheit = ((float)9/5 * celsius) + 32;
	printf(" the temperature in fahrenhit is : %f" , fahrenheit);
}
