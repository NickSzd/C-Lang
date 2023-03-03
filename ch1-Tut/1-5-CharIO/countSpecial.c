#include<stdio.h>

int main(){
	int numTab, numSpace, numLine, c;
	numTab = numSpace = numLine = 0;

	while((c = getchar())!= EOF){
		if(c == ' ') numSpace++;
		if(c == '\t') numTab++;
		if(c =='\n') numLine++;
		putchar(c);
	}
	printf("\nNumTab: %d\n NumSpace: %d\n NumLine: %d", numTab, numSpace, numLine);
	return 0;
}
