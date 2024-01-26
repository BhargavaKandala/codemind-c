#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int a, b;
    scanf("%d %d",&a,&b);
    int arr2[a][b];
    for(int i = 0 ;i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j] + arr2[i][j]);
        }
        printf("
");
    }
    
}