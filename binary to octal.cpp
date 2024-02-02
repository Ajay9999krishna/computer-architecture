#include <stdio.h>

int main() 
{
    long binaryNumber;
    printf("Enter a binary number: ");
    scanf("%ld", &binaryNumber);
    printf("Octal value is : %lo\n", binaryNumber);
    return 0;
}

