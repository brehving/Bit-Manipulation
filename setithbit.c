#include <stdio.h>

int main() {
    int num = 42;  // Example number (binary: 101010)
    int i = 1;     // Bit position

    int newNum = num | (1 << i);
    printf("Number after setting %dth bit: %d\n", i, newNum);

    return 0;
}
