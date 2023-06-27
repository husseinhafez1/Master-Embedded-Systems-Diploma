#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int i, n;
	float *arr;
	printf("Enter the numbers of data: ");
	scanf("%d", &n);
	arr = (float *)malloc(sizeof(float)*n);
	for (i = 0; i < n; i++) {
		printf("%d. Enter number: ", i+1);
		scanf("%f", &arr[i]);
	}
	float s = 0;
	for (i = 0; i < n; i++) {
		s+=arr[i];
	}
	printf("Average: %.2f", s/n);
	return 0;
}