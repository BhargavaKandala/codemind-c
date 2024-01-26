#include<stdio.h>
int odd(int num){
    if(num % 2 == 1){
        return 1;
    }
    return 0;
}

int main()
{
    int n , m;
    scanf("%d %d" , &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int oddsum = 0;
    int evensum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(odd(arr[i][j])){
                oddsum += arr[i][j];
            }
            else evensum += arr[i][j];
        }
    }
    printf("%d %d", evensum , oddsum);
}