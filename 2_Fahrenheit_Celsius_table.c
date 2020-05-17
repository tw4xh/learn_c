#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
int main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 200; /* upper limit */
	step = 20; /* step size */
	
	fahr = lower;
	/* Exercise 1-3 Modify the temperature conversion program to print a heading above the table */
	printf("Fahrenheit Celsius Table\n");
	printf("Fahr\tCelsius\n");
	while (fahr <= upper) {
		celsius = 5.0 * (fahr-32)/9.0;
		printf("%4.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
}
	return 0;
}
