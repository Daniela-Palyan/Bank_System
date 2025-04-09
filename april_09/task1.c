#include <stdio.h>
int fib(int n){
	if(n < 2){
		return n;
	}
	return fib(n - 1) + fib(n - 2);
}
int main(){
	int index = 0;
	printf("Enter index: ");
	fflush(stdout);
	scanf("%d", &index);
	printf("Your fibonachi number is: %d\n", fib(index));
	return 0;
}
