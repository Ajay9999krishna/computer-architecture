#include <stdio.h>
void executeInstruction(int instructionNumber) {
    printf("Executing instruction %d\n", instructionNumber);
}
int main() {
    int instructionStream[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
    for (int i = 0; i < 10; i += 2) {
        executeInstruction(instructionStream[i]);
        executeInstruction(instructionStream[i + 1]);
    }
return 0;
} 
