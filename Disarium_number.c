#include <stdio.h>
#include <math.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    int r = a;
    int rev = 0;
    while(a>0){
        i=a%10;
        rev = rev*10 + i;
        a=a/10;
    }
    a = r;
      int  j=1;
      int y;
    
    while(rev>0){
    	y=rev%10;
    	sum=pow(y,j) +sum;
    	j+=1;
    	rev=rev/10;
	}
	if(sum==a){
		printf("True");
	}
	else printf("False");
    
    
}