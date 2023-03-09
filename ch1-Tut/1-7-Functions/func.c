#include <stdio.h>

long int power(long int a, int n){
	int val = 1;
	if (n == 0) return val;
	else{
		for(int i = 1; i < n; i++){
			val = val * a;
		}
	}
	return val;
}

int main(){
	//Powers of 2
	for(int i = 0; i < 32; i++)
	{
		printf("2^%d=%ld\n",i, power(2, i));
	}
	return 0;
}
