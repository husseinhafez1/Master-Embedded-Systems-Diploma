#include <stdio.h>

int main() {
	float num1, num2;
	char c;
	printf("Enter operator either + or - or * or /: ");
	scanf("%c", &c);
	printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch (c)
    {
    case '+':
        printf("%g + %g = %g", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%g - %g = %g", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%g * %g = %g", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%g / %g = %g", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operator!.");
        break;
    }
	return 0;
}