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
         printf("_Palindrome_\n");  // palindrome number is a number that remains the same when its digits are reversed.
    else
        printf("_Not Palindrome_\n");

    return 0;
}

// By taking input from user.
#include <stdio.h>

int reverse(int n, int r) {
    if (n == 0)
        return r;

    return reverse(n/10, r*10 + n%10);
}

int main() {
    int num ;
    printf("enter a num =");
    scanf("%d",&num);
    int rev = reverse(num, 0);

    if(num == rev)
         printf("_Palindrome_\n");  // palindrome number is a number that remains the same when its digits are reversed.
    else
        printf("_Not Palindrome_\n");

    return 0;
}


















