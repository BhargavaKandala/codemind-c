#include<stdio.h>
int main()
{
    int rows, columns,sum = 0;
    scanf("%d%d",&rows,&columns);
    
    int arr[rows][columns];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns ;j++){
            sum += arr[i][j];
        }
    }
    printf("%d",sum);
    
    
}