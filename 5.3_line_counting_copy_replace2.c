#include <stdio.h>

/* count lines in input */
main()
{
	int c;	

	while ((c = getchar()) != EOF){
		if (c == '\t'){
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b'){
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\'){
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
	
}

