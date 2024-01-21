#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int num) {
    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

void closestPalindrome(int num) {
    int smallerPalindrome, largerPalindrome;

    for (int i = num - 1; i > 0; i--) {
        if (isPalindrome(i)) {
            smallerPalindrome = i;
            break;
        }
    }

    for (int i = num + 1;; i++) {
        if (isPalindrome(i)) {
            largerPalindrome = i;
            break;
        }
    }

   
    int diffSmaller = abs(num - smallerPalindrome);
    int diffLarger = abs(largerPalindrome - num);

    if (diffSmaller < diffLarger) {
        printf("%d ", smallerPalindrome);
    } else if (diffLarger < diffSmaller) {
        printf("%d ", largerPalindrome);
    } else {
        printf("%d %d ", smallerPalindrome, largerPalindrome);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    closestPalindrome(num);

    return 0;
}
