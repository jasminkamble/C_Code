#include <stdio.h>

int secondLargest(int arr[], int size) {
    int big = arr[0];
    int big2 ,i; // or INT_MIN if negatives are possible

    for (i = 1; i < size; i++) {
        if (arr[i] > big) {
            big2 = big;   // old largest becomes second largest
            big = arr[i]; // update largest
        } else if (arr[i] > big2 && arr[i] != big) {
            big2 = arr[i]; // update second largest if needed
        }
    }
    return big2;
}

int main() {
    int number[] = {6, 8, 10, 9, 5};
    int size;

    printf("Second largest number in the given array = %d\n", secondLargest(number,5));

    return 0;
}
