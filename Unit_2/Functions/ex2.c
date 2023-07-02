#include<stdio.h>
#include<string.h>
#include<ctype.h>

int fact(int n) {
	if (n ==1 || n == 0) {
		return 1;
	}
	return n * fact(n-1);
}

int main() {
	int a;
	printf("Enter a positive integer: ");
	scanf("%d", &a);
	printf("Factorial of %d = %d", a, fact(a));
	return 0;
}