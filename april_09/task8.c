#include <stdio.h>
void bin(int n)
{
	if(n > 1)
	{
		bin(n / 2);
	}
	printf("%d", n % 2);
	fflush(stdout);

}
int main(){
	int num = 0;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &num);
	bin(num);
	printf("\n");
	return 0;
}
