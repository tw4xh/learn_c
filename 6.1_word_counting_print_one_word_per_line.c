#include <stdio.h>

#define IN 1 	/* inside a word */
#define OUT 0   /* outside a word */

/* Exercise 1-12. Write a program that prints its input one word per line. */
int main()
{
	int c, state;
	int first_fl;

	state = OUT;
	first_fl = 1;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t' )
			state = OUT;
		else if (state == OUT){
			state = IN;
			if (first_fl == 1){
				first_fl = 0;
				putchar(c);
			}
			else{
				putchar('\n');
				putchar(c);
			}
		}
		else if (state == IN){
			putchar(c);
		}
	}

	return 0;
}

