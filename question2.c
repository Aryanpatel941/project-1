#include<stdio.h>
main()
{
	// question 2
	int angle1,angle2 , total_angle;
	
	printf(" enter the first angle :");
	scanf("%d" ,&angle1);
	printf(" enter the second angle :");
	scanf(" %d" , &angle2);
	
	total_angle=  180-angle1 -angle2;
	printf(" the third angle angle is : %d" , total_angle);
	
	
}
