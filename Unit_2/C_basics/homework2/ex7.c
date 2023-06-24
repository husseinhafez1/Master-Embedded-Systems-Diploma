#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	unsigned long long ans = 1;
	if (n<0) {
		printf("Error!!! Factorial of negative number does not exist");
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		ans*=i;
	}
	printf("Factorial= %llu", ans);
	return 0;
}