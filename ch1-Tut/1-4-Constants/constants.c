#include<stdio.h>
//Constant Definitions
#define LOWER 0 // lower limit
#define UPPER 300 // upper limit
#define STEP 10 // step margin

int main(){
	int fahr = 0;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%d %6.1f\n",fahr, (5.0/9.0) * (fahr - 32));
	}

	return 0;
}
