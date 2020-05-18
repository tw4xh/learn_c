#include <stdio.h>

#define CHAR_LEN 128
/* Exercise 1-14. Write a program to 
print a histogram of the frequencies
 of different characters in its input.*/

int main()
{
	int c, i, j;
	int nchar[CHAR_LEN];
	
	for (i = 0; i < CHAR_LEN; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF)
		++nchar[c];

	for (i = 0; i < CHAR_LEN; ++i){
		j = nchar[i];
		if (j>0){
			printf("%1c",i);
			while(j >0){
				putchar('*');
				j--;
			}
			putchar('\n');
		}
	}	
	return 0;
}
