#include <stdio.h>

int main() {
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	unsigned long long ans = 0;
	for (int i = 1; i <= n; i++) {
		ans+=i;
	}
	printf("Sum= %llu", ans);
	return 0;
}