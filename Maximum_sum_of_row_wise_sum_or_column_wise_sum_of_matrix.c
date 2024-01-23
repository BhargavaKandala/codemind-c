#include<stdio.h>
int main()
{
    int n ,m;
    scanf("%d %d",&n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    int row[n] = {0}, col[m] = {0};
    int max_row = 0 , max_col = 0;
    
    
     for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
     }
    
    for(int i = 0; i < n; i++){
        max_row =(row[i] > max_row) ? row[i] : max_row;
    }
    
    for(int j = 0; j < m; j++){
        max_col =(col[j] > max_col) ? col[j] : max_col;
    }

    if(max_row > max_col){
        printf("%d ", max_row);
    }
    else printf("%d ", max_col);
    
}
