#include <stdio.h>

/* count lines in input */
/* Exercise 1-9. Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank. */
main()
{
	int c, n_space;
	
	n_space = 0;
	while ((c = getchar()) != EOF){
		if (c == ' '){
			n_space++;
			if (n_space <2)
				putchar(c);	
		}
		else{
			n_space = 0;
			putchar(c);
		}
	}
	
}

