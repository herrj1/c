#include <stdio.h>

int search(int arr[], int n, int x){
	
	int i;
	
	for(i = 0; i< n; i++){
		if(arr[i]==x)
			return i;
	}
	return -1;
}

//driver
int main(void){
	int arr[] = {5,2,1,5};
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int result = search(arr, n, x);
	
	(result == -1) ? printf("Not found") : printf("Found at %d", output);

	return 0;
}
