#include <stdio.h>
void mas_print(int * arr, int size)
{
	printf("%d ", arr[0]);
	fflush(stdout);
	if(size > 1)
	{
		mas_print(arr + 1, --size);
	}
}
int main()
{
	int size = 6;
	int arr[size];
	printf("Enter number for array: ");
	fflush(stdout);
	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	mas_print(arr, size);
	return 0;
}
