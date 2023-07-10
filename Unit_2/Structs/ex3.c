#include<stdio.h>

struct complex {
	float real;
	float imaginary;
};

void scanComplex(struct complex *x) {
	printf("\nFor 1st complex number\n");
	printf("Enter real and imaginary number: ");
	scanf("%f%f", &(x->real), &(x->imaginary));
}

int main() {
	struct complex x;
	struct complex y;
	scanComplex(&x);
	scanComplex(&y);
	struct complex sum;
	sum.real = x.real + y.real;
	sum.imaginary = x.imaginary + y.imaginary;
	printf("Sum=%.1f+%.1fi", sum.real, sum.imaginary);
	return 0;
}