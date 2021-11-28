#include<stdio.h>
#include<conio.h>

main(){
	
	int i,j,k,n=5;
	
	for(i =1;i<=n;i++){
		for(j=1;j<n*2;j++){
			if(j<=i||j>=n*2-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
