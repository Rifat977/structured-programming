#include<stdio.h>
int main(){
	
	double basic_salary, dearness_allowance, house_rent, gross_salary;

	printf("Enter niloys basic salary: ");
	scanf("%lf", &basic_salary);

	dearness_allowance = 0.4 * basic_salary;
	house_rent = 0.2 * basic_salary;
	gross_salary = basic_salary-dearness_allowance-house_rent;
	printf("Gross slaray of Niloy: %2.lf\n", gross_salary);

	return 0;
}
