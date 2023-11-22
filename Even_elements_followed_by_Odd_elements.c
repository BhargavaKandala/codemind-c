#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i<n; i++){
		int temp = arr[i];
		if(temp%2==0){
			printf("%d ", temp);
		}
	}
	
	for(int i=0; i<n; i++){
		int temp = arr[i];
		if(temp%2 !=0){
			printf("%d ",temp);
		}
	}
}