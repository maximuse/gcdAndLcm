#include <stdio.h>
#include <stdlib.h>

void greatestCommonDivisor(unsigned int a, unsigned int b) {
	unsigned int i,
				 r;

	for (i = 1; i <= a && i <= b; i++) {
		if ( a % i == 0 && b % i == 0)
			r = i;
	}

    printf("Greatest Common Divisor: %d\n", r);
}

void leastCommonMultiple(unsigned int a, unsigned int b) {
	unsigned int i;

	for (i = a > b ? a : b; i % a != 0 || i % b != 0 ; i++);

    printf("Least Common Multiple: %d\n", i);
}

int main() {
    int a, b;

    printf("Enter a positive integer: ");
    scanf("%d", &a);
    printf("Enter another positive integer: ");
    scanf("%d", &b);

    printf("\n");
    greatestCommonDivisor(a, b);
    leastCommonMultiple(a, b);

    system("PAUSE");
    return 0;
}