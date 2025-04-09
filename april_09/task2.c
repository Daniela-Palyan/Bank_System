#include <stdio.h>
int mul(int n){
	if(n < 10){
		return n;
	}
	return (n % 10) * mul(n / 10);
}
int main(){
	int num = 0;
	printf("Enter your number: ");
	fflush(stdout);
	scanf("%d", &num);
	printf("Result is: %d\n", mul(num));
	return 0;
}
