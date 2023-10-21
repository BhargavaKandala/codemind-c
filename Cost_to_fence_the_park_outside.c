#include <stdio.h>
int main()
{
	int l,b,w,c;
	scanf("%d%d%d%d",&l,&b,&w,&c);
	int len=l+(2*w);
	int bred=b+(2*w);
	int area=(len*bred) - (l*b);
	
	if(w>0 && len>0 && bred>0 && area>0){
		printf("%d",area*c);
	}
	else printf("Impossible");
}