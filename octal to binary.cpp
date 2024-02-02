#include <stdio.h>
int main() {
    long octalNumber;
    printf("Enter an octal number: ");
    scanf("%lo", &octalNumber);
    while (octalNumber) {
        int digit = octalNumber % 10;
        for (int i = 2; i >= 0; --i) {
            printf("%d", (digit >> i) & 1);
        }
        octalNumber /= 10;
    }     
    printf("\n");
    return 0;
}

