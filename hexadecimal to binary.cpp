#include <stdio.h>

int main() {
    char hex[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    printf("Binary equivalent: ");
    for (int i = 0; hex[i] != '\0'; i++) {
        switch (hex[i]) {
            case '0' ... '9': printf("%c%c%c%c", (hex[i] & 8 ? '1' : '0'), (hex[i] & 4 ? '1' : '0'), (hex[i] & 2 ? '1' : '0'), (hex[i] & 1 ? '1' : '0')); break;
            case 'A' ... 'F': case 'a' ... 'f': printf("%c%c%c%c", ((hex[i] & 8) ? '1' : '0'), ((hex[i] & 4) ? '1' : '0'), ((hex[i] & 2) ? '1' : '0'), ((hex[i] & 1) ? '1' : '0')); break;
            default: printf("Invalid hexadecimal digit %c\n", hex[i]);
        }
    }
    return 0;
}

