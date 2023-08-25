#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 

int main() {
	int arr[15];
	int i, n;
	int *ptr;
	printf("Input the number of elements to store in the array (max 15): ");
	scanf("%d", &n);
	ptr = arr;
	for (i = 0; i < n; i++) {
		printf("element - %d: ", i+1);
		scanf("%d",ptr);
		ptr++;
	}
	ptr--;
	printf("the elements of the array in reverse order is: \n");
	for (i = n; i > 0; i--) {
		printf("element - %d : %d\n", i, *ptr);
		ptr--;
	}
	return 0;
}