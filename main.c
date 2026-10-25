#include <stdio.h>

int main() {
	int a, b;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	int diff = a - b;
	printf("Difference: %d\n", diff);
	return 0;
}
