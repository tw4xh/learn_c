#include <stdio.h>

/* count lines in input */
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

