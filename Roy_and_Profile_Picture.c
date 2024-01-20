#include<stdio.h>
int main()
{
    int len , n;
    scanf("%d%d", &len, &n);
    
    for(int i = 1; i <= n; i++){
        int wid , h;
        scanf("%d%d",&wid,&h);
        
        if(wid < len || h < len){
            printf("UPLOAD ANOTHER
");
        }
        else if(wid == h){
            printf("ACCEPTED
");
        }
        else if(wid != h){
            printf("CROP IT
");
        }
        
    }
}


