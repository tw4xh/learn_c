#include <stdio.h>

/* count lines in input */
/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
main()
{
	int c, nl, nb, nt;
	
	nl = 0;
	nb = 0;
	nt = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++nb;
	}
	printf("#line: %d\n#blank: %d\n#tab: %d\n ", nl, nb, nt);
}

