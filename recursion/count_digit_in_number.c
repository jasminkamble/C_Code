#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main() {
    printf("_%d_\n", countDigits(1236540));
    return 0;
}