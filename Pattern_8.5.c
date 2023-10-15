#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i==n-j+1)
             printf("%c",64+i);
            else printf(" ");
        }
        printf("
");
    }
}