#include <stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    
    if(x+y+z==w){
        printf("YES");
    }
    else if(x==w || y==w || z==w)
    {
        printf("YES");
    }
    else if(x+y==w || y+z==w || x+z==w)
    printf("YES");
    
    else
    printf("NO");
}