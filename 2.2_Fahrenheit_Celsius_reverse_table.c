#include <stdio.h>
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	
	/* Exercise 1-5 Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0 */
	printf("Fahrenheit Celsius Table\n");
	printf("Fahr\tCelsius\n");

	for(fahr = upper; fahr >= lower; fahr -= step){
		celsius = 5.0 * (fahr - 32)/9.0;
		printf("%4.0f\t%7.1f\n",fahr, celsius);
	}
}
