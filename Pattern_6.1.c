#include <stdio.h>
int main()
{
    int n,i,j,k=1;
    scanf("%d",&n);
    
    for (int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
           if(i<j) 
             printf(" ");
           else printf("* ");
        }
        printf("
");
    }
}
