#include<stdio.h>
int main()
{
	float fhar,celcius;

	printf("Enter the temperature in fhar : ");
	scanf("%f",&fhar);

	celcius = 5.0/9 * (fhar-32);
	printf("Temperature in celcius : %f \n", celcius);

	return 0;
}