#include <stdio.h>
char first_up(char * arr, int size)
{
	if(size < 1)
		return '!';
	if(arr[0] <= 'Z' && arr[0] >= 'A' ){
		return arr[0];
	}

	return first_up(arr + 1, --size);
}
int main(){
	int size = 6;
	char arr[size];
	for(int i = 0; i < size; i++){
		scanf(" %c", &arr[i]);
	}
	printf("First uppercase letter in your array is (! if there is no uppercase letter): %c\n", first_up(arr, size));
	return 0;
}
