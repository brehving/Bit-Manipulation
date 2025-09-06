#include <stdio.h>

int main() {
    int num = 42;  // Example number (binary: 101010)
    int i = 3;     // Bit position

    int bit = (num >> i) & 1;
    printf("The %dth bit of %d is: %d\n", i, num, bit);

    return 0;
}
