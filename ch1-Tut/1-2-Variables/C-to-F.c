#include <stdio.h>

int main()
{	
	float fahr, cel;
	float low, upper, step;
	low = -40;
	upper = 300;
	step = 5;
	
	cel = low;

	while(cel <= upper){
		fahr = (cel / (5.0/9.0)) + 32.0;
		printf("%3.0f %6.1f\n", cel, fahr);
		cel+=step;
	}
	return 0;
}
