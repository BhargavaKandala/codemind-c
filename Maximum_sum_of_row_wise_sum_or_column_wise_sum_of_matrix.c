#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d", &n, &m);
    
    int arr[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);    
        }
    }
    
    int rowsum[n] = {0} ,colsum[m] = {0};
    int maxrow = 0 , maxcol = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            rowsum[i] += arr[i][j];
            colsum[j] += arr[i][j];
        }
    }
    
      for(int i = 0; i < n; i++){
          if(rowsum[i] > maxrow){
              maxrow = rowsum[i];
          }
      }
      
    
      for(int j = 0; j < n; j++){
          if(colsum[j] > maxcol){
              maxcol = colsum[j];
          }
      }
      
      if(maxcol > maxrow){
          printf("%d ", maxcol);
      }
      else printf("%d ",maxrow);
      
}


 