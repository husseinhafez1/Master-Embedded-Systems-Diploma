#include<stdio.h>
#include<math.h>

#define PI 3.14159265359
#define calcArea(r) PI*r*r 

int main() {
	float r;
	printf("Enter radius: ");
	scanf("%f", &r);
	printf("Area=%.2f", calcArea(r));
	return 0;
}