#include <stdio.h>

// Function to calculate the sum of squares of digits of a number
int sumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

// Function to check if a number is a happy number
int isHappy(int num) {
    int slow = num, fast = num;
    do {
        slow = sumOfSquares(slow);        // Move one step
        fast = sumOfSquares(sumOfSquares(fast));  // Move two steps
    } while (slow != fast && slow != 1);

    return slow == 1;  // If the loop ended with 1, it's a happy number
}

int main() {
    int n;
    scanf("%d", &n);

    if (isHappy(n)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
