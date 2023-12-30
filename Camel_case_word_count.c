#include <stdio.h>

int count(char str[]) {
        int count = 1;    
        for (int i = 0; str[i] != NULL; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z') {
            count++;
        }
    }

    return count;
}

int main() {
    
    char str[100];

    scanf("%s", str-1);
    int result = count(str);

    printf("%d
", result);

    return 0;
}