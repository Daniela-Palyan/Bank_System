#include <stdio.h>
void res_print(int n)
{
	printf("%d ", n);
	fflush(stdout);
	if(n > 0){
		res_print(n - 1);
	}
}
int main(){
	int num = 0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);
	res_print(num);
	printf("\n");
	return 0;
}
