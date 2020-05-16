#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */
main()
{
	float fahr;
	printf("Fahrenheit Celsius Table\n");
	printf("Fahr\tCelsius\n");

	for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
		printf("%4.0f\t%7.1f\n",fahr, (5.0/9.0)*(fahr-32));
	}
}
