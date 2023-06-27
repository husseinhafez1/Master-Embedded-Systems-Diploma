#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int i, n, x, ans=-1;
	int *arr;
	printf("Enter no of elements: ");
	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d", &x);
	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			ans = i+1;
			break;
		}
	}
	if (ans!=-1)
		printf("Number found at location = %d", ans);
	else
		printf("The number %d was not found in the array", x);
	return 0;
}