#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int j=t;j>0;j--){
        int a,b,count=0;
        scanf("%d %d",&a,&b);
        for(int i=a;i<=b;i++){
            if((i%10)==2)
            count+=1;
    
            else if(i%10==3)
            count+=1;
            
            else if(i%10==9)
            count+=1;
            else continue;
        }
        printf("%d
",count);
    }
}