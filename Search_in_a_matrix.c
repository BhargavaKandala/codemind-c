#include<stdio.h>
int main()
{
    int n, m, flag = 0;
    scanf("%d %d",&n, &m);
    
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < m ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    int num;
    scanf("%d",&num);
    
    for(int i = 0 ;i < n ; i++){
        for(int j = 0; j < m ; j++){
            if(num == arr[i][j]){
                flag = 1;
            }
        }
    }
    printf("%d",flag);
}