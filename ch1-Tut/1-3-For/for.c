#include<stdio.h>

int main(){
	int fahr = 0;
	for(fahr = 0; fahr <= 300; fahr = fahr + 10)
	{
		printf("%3d %6.1f\n",fahr, (5.0 / 9.0)*(fahr-32));
	}
	return 0;
}
