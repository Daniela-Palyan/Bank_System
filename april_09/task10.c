# include <stdio.h>
int min(int * arr, int size){
	if(size == 1){
		return arr[0];
	}
	int min_num = min(arr + 1, --size);
	if(min_num < arr[0]){
		return min_num;
	}
	else{
		return arr[0];
	}
}	
int max(int * arr, int size){
        if(size == 1){
                return arr[0];
        }
        int max_num = max(arr + 1, --size);
        if(max_num > arr[0]){
                return max_num;
        }
        else{
                return arr[0];
        }
}

int main()
{
	int size = 6;
	int arr[size];
	printf("Enter an array: ");
	fflush(stdout);
	for (int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
	printf("Min number is: %d\nAnd max number is: %d\n", min(arr, size), max(arr, size));
	return 0;
}
