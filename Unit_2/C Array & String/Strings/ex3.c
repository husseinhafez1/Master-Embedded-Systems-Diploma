#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
	char str[100];
	int l, r;
	printf("Enter the string: ");
	scanf("%s", str);
	l = 0, r = strlen(str)-1;
	while (l < r) {
		char t = str[l];
		str[l] = str[r];
		str[r] = t;
		l++, r--;
	}
	printf("Reverse string is: %s", str);
	return 0;
}