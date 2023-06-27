#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	int i, j;
	int r, c;
	printf("Enter rows and columns of matrix: ");
	scanf("%d%d", &r, &c);
	int arr[100][100], trans[100][100];
	printf("\nEnter elements of matrix:\n");
	for (i = 0; i < r; i++) {
		for (j = 0; j < c;j++) {
			printf("Enter element a%d%d: ", i+1, j+1);
			scanf("%d", &arr[i][j]);
			trans[j][i] = arr[i][j];
		}
	}
	printf("\nEntered Matrix:\n");
	for (i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix:\n");
	for (i = 0; i < c; i++) {
		for(j = 0; j < r; j++) {
			printf("%d ", trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}