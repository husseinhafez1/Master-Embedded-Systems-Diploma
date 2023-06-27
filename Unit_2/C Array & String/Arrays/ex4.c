#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	int i, n, x, idx;
	int a[100];
	printf("Enter no of elements: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d", &x);
	printf("Enter the location: ");
	scanf("%d", &idx);
	for (i = n; i >= idx; i--) {
		a[i] = a[i-1];
	}
	a[idx-1] = x;
	for (i = 0; i < n+1; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}