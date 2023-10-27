#include <stdio.h>
int main()
{
    float n,sum=0.0;
    scanf("%f",&n);
    
    for(int i=1;i<=n;i++){
        sum+=1.0/i;
    }
    printf("%.2f",sum);
}