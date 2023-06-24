#include <stdio.h>

int main() {
	float x;
	printf("Enter a number: ");
	scanf("%f", &x);
	(x>0)?printf("%.2f is positive", x):(x<0)?printf("%.2f is negative", x):printf("You entered zero");
	return 0;
}