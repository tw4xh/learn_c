#include <stdio.h>

#define IN 1 	/* inside a word */
#define OUT 0   /* outside a word */

/* Exercise 1-13. Write a program to print a 
histogram of the lengths of words in its input. 
It is easy to draw the histogram with the bars
 horizontal; a vertical orientation is more challenging.*/
int main()
{
	int c, state;
	int first_fl;

	state = OUT;
	first_fl = 1;

	while ((c = getchar()) != EOF){
		if (c == ' ' || c == '\n' || c == '\t' ){
			state = OUT;
		}
		else if (state == OUT){
			state = IN;
			if (first_fl == 1){
				first_fl = 0;
				putchar('|');
			}
			else{
				putchar('\n');
				putchar('|');
			}
		}
		else if (state == IN){
			putchar('|');
		}
	}

	return 0;
}
