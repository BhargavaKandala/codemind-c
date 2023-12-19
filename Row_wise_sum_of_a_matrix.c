#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n, &m);
    
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0; i < n ; i++){
        int rowsum = 0;
        for(int j = 0; j < m ; j++){
            rowsum = rowsum + arr[i][j];
        }
         printf("%d ", rowsum);
    }
    
    
   
}