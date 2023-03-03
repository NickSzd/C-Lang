#include <stdio.h>

int main()
{
	int numLines = 0;
	int c;
	while ((c = getchar()) != EOF)
	{
		if(c == '\n') {
			numLines++;
			printf("%d\n", numLines);
		}
		putchar(c);
	}

	return 0;
}
