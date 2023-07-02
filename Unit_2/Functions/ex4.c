#include<stdio.h>
#include<string.h>
#include<ctype.h>

int solve(int b, int p, int ans) {
	if (p == 0) {
		return ans;
	}
	ans*=b;
	p--;
	return solve(b,p,ans);
}

int main() {
	int a,b;
	printf("Enter base number: ");
	scanf("%d", &a);
	printf("Enter power number(positive number): ");
	scanf("%d", &b);
	printf("%d^%d = %d", a, b, solve(a,b,1));
	return 0;
}