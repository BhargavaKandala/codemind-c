#include <stdio.h>
#include <string.h>

char findSecondMostFrequentLetter(char *str) {
    int count[26] = {0}; // Assuming only lowercase letters are considered

    // Count the occurrences of each letter
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }

    // Find the maximum and second maximum occurrences
    int maxCount = 0, secondMaxCount = 0;
    char maxChar = NULL, secondMaxChar = NULL;

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            secondMaxCount = maxCount;
            secondMaxChar = maxChar;

            maxCount = count[i];
            maxChar = 'a' + i;
        } else if (count[i] > secondMaxCount && count[i] != maxCount) {
            secondMaxCount = count[i];
            secondMaxChar = 'a' + i;
        }
    }

    return secondMaxChar;
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    str[strcspn(str, "
")] = NULL;

    char result = findSecondMostFrequentLetter(str);

    if (result != NULL) {
        printf("%c
", result);
    } else {
        printf("-1");
    }

    return 0;
}
