#include <stdio.h>
/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */
/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = -50; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */
	
	celsius = lower;

	printf("Celsius Fahrenheit Table\n");
	printf("Celsius\tFahr\n");
	while (celsius <= upper) {
		fahr = celsius * 9.0/5.0 + 32;
		printf("%7.1f\t%4.0f\n", celsius, fahr);
		celsius = celsius + step;
}
}
