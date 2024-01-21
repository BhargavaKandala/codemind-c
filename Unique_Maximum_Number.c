#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int FoundUnique = 0;
    int highestUnique = -1;
    
    
    for(int i = 0; i < n; i++) {
        int unique = 1;
        
        for(int j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        
        if(unique) {
            FoundUnique = 1;

            // Check if the current unique element is higher than the previously found highest unique
            if (highestUnique == -1 || arr[i] > highestUnique) {
                highestUnique = arr[i];
            }
        }
    }

    if (FoundUnique) {
        printf("%d" , highestUnique);
    }
    else printf("-1");

    return 0;
}
