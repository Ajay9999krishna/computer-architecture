#include <stdio.h>

int main() {
    long num, binary_num, decimal_num = 0, base = 1, rem;
    printf("Enter a binary number with the combination of 0s and 1s: ");
    scanf("%ld", &num);
    binary_num = num;
    while (num > 0) {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }

    printf("The binary number is %ld\n", binary_num);
    printf("The decimal number is %ld\n", decimal_num);
    printf("The octal number is %lo\n", decimal_num);
    
    return 0;
}

