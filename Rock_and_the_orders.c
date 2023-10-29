#include <stdio.h>
int main()
{
    int d,c,s1,s2;
    int a1,a2,a3;
    int b1,b2,b3;
    scanf("%d%d %d%d%d %d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    s1=a1+a2+a3;
    s2=b1+b2+b3;
    int cost =s1+s2+(2*d);
    if(s1<150 && s2<150){
        if( cost > c+cost)
        printf("YES");
        else printf("NO");
    }
    else if(s1>=150 && s2>=150){
       
         if(cost > cost+c-d-d)
            printf("YES");
        else printf("NO");
    }
    else if(s1>=150 && s2<150 || s1<150 && s2>=150){
         if(cost > cost+c-d)
            printf("YES");
        else printf("NO");
    }
}  




