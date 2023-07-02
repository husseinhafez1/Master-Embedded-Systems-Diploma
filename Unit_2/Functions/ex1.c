#include<stdio.h>
#include<string.h>
#include<ctype.h>

int solve(int n) {
	int i;
	for (i = 2; i <= n/2; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int a,b, i;
	printf("Enter two numbers(intervals): ");
	scanf("%d%d", &a, &b);
	printf("Prime numbers between 10 and 30 are: ");
	for (i = a; i <= b; i++) {
		if (solve(i)) 
			printf("%d ", i);
	}
	return 0;
}