#include <stdio.h>

int main()
{
	// Formula = C = (5/9)(Far - 32)
	// Displays Temp in F and Celsius
	float fahr = 0, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	printf("  F \t C\n");
	while(fahr <= upper){
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f \t %6.1f\n", fahr, celsius); // \t is a tab
		fahr = fahr + step;
	}
	return 0;
}
