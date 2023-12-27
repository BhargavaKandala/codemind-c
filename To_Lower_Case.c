#include <stdio.h>
#include <ctype.h>

void Lowercase(char str[]) {
    for (int i = 0; str[i] != NULL; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    scanf("%s", str);

    Lowercase(str);
    printf("%s
", str);

    return 0;
}
