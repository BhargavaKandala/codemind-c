#include<stdio.h>
int shortarray(int arr[], int n, int a ,int b ){
	int max = -1;
		for(int i = 0; i < n; i++){
			if( arr[i] < a || arr[i] > b){
				if(arr[i] > max){
						max = arr[i]; 
				}
			}
		}
		return max;
}



int main()
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    int a,b;
    scanf("%d%d", &a, &b);
    
    int result =  shortarray(arr ,n , a, b); 
    if(result == -1){
        printf("-1");
    }
    else 
    printf("%d",result);
    
    
    
    
    
}