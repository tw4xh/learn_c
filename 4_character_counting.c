#include <stdio.h>

/* count characters in input */
main()
{
	long nc;
	
	//nc = 0;
	//while (getchar() != EOF)
	//	++nc;
	
	for (nc = 0; getchar() != EOF; ++nc)
		;
	//printf("%1d\n", nc);
	printf("%ld\n", nc);
}