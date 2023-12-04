#include<stdio.h>
#include<math.h>
int main()
{
    int n, even = 0, odd = 0;
    scanf("%d",&n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);    //getting array elements
    }
    
     for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            even += arr[i];  //sum of even elements
        }
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 1){
            odd += arr[i];  //sum of odd elements.
        }
    }
    printf("%d",abs(odd-even));
}   