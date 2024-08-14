#include<stdio.h>
main()
{
	// question 3
	int basesalary, hra_percentage, da_percentage, ta_percentage, gross_salary;
	
	printf(" enter the base salary : ");
	scanf("%d", &basesalary);
	printf(" enter the hra percentage : ");
	scanf("%d", &hra_percentage);
	printf(" enter the da percentage : ");
	scanf("%d", &da_percentage);
	printf(" enter the ta percentage : ");
	scanf("%d", &ta_percentage);
	
	gross_salary =  basesalary + basesalary * hra_percentage/100 +  basesalary * da_percentage/100 +  basesalary * ta_percentage/100;
	printf(" the gross salary is : %d" , gross_salary);
	
	
	
	
}
