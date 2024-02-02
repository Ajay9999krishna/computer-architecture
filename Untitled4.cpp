#include <stdio.h>

int main() {
    long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%ld", &binaryNumber);
    printf("Hexadecimal equivalent: %lX\n", binaryNumber);
    return 0;
}

