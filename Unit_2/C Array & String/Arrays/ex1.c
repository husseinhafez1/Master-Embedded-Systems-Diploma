#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	int i, j;
	float a[2][2], b[2][2];
	printf("Enter the elements of the 1st matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter a%d%d: ", i+1, j+1);
			scanf("%f", &a[i][j]);
		}
	}
	printf("\nEnter the elements of the 2nd matrix\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("Enter b%d%d: ", i+1, j+1);
			scanf("%f", &b[i][j]);
		}
	}
	printf("\nSum of Matrix:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%.1f ", a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	return 0;
}