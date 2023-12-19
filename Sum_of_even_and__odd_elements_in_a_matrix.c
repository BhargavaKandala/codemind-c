#include<stdio.h>
int main()
{
    int n,m;
    int evencount = 0, oddcount = 0;
    scanf("%d%d",&n, &m);
    
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
          if(arr[i][j] % 2 == 0){
             evencount = evencount + arr[i][j];
        }
          if(arr[i][j] % 2 == 1){
             oddcount = oddcount + arr[i][j];
        }
    }
  }
  printf("%d %d",evencount , oddcount);
}