#include <stdio.h>

int main() {
    long b; 
    int d = 0, p = 1;
    printf("Enter a binary number: ");
    scanf("%ld", &b);
    while (b) {
        d += (b % 10) * p;
        b /= 10;
        p *= 2;
    }
    printf("Decimal equivalent: %d\n", d);
    return 0;
}

