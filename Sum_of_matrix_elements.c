#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d" , &arr[i][j]);
        }
    }
    
    int sum = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
             sum += arr[i][j];
        }
    }
    printf("%d" , sum);
    
}