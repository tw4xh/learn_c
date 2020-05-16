#include <stdio.h>

/* copy input to output */
main()
{
	int c;
	/* Exercise 1-7 Write a program to print the value of EOF */
	printf("%d",EOF);	
	while ((c = getchar()) != EOF) {
		/* Exercise 1-6 Verify that the expression getchar() != EOF is 0 or 1 */
		printf("%d",c!=EOF);
		putchar(c);
	}
	printf("%d",c!=EOF);
}
