#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        if(m - k > n){
            printf("YES
");
        }
        else printf("NO
");
    }
}