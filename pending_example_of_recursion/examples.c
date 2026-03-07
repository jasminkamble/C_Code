1. Power of a Number


#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main() {
    printf("%d", power(2, 5));
    return 0;
}

Output

32
2. Print Numbers from 1 to N
#include <stdio.h>

void printNumbers(int n) {
    if (n == 0)
        return;

    printNumbers(n - 1);
    printf("%d ", n);
}

int main() {
    printNumbers(5);
    return 0;
}

Output

1 2 3 4 5
3. Print Numbers from N to 1
#include <stdio.h>

void printReverse(int n) {
    if (n == 0)
        return;

    printf("%d ", n);
    printReverse(n - 1);
}

int main() {
    printReverse(5);
    return 0;
}

Output

5 4 3 2 1
4. Sum of Digits of a Number
#include <stdio.h>

int sumDigits(int n) {
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main() {
    printf("%d", sumDigits(1234));
    return 0;
}

Output

10
5. Product of Digits
#include <stdio.h>

int productDigits(int n) {
    if (n == 0)
        return 1;

    return (n % 10) * productDigits(n / 10);
}

int main() {
    printf("%d", productDigits(123));
    return 0;
}

Output

6
6. Check Palindrome Number
#include <stdio.h>

int reverse(int n, int r) {
    if (n == 0)
        return r;

    return reverse(n/10, r*10 + n%10);
}

int main() {
    int num = 121;
    int rev = reverse(num, 0);

    if(num == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
7. Find GCD (Greatest Common Divisor)
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    printf("%d", gcd(12, 18));
    return 0;
}

Output

6
8. Convert Decimal to Binary
#include <stdio.h>

void binary(int n) {
    if (n == 0)
        return;

    binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    binary(10);
    return 0;
}

Output

1010
9. Count Digits in a Number
#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main() {
    printf("%d", countDigits(12345));
    return 0;
}

Output

5
10. Sum of Even Numbers up to N
#include <stdio.h>

int sumEven(int n) {
    if (n == 0)
        return 0;

    if (n % 2 == 0)
        return n + sumEven(n - 1);
    else
        return sumEven(n - 1);
}

int main() {
    printf("%d", sumEven(10));
    return 0;
}