#include<stdio.h>
#include<conio.h>
main(){
	
	int space,i,j,a=5;
	
	for(i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",a);
		}
		a--;
		printf("\n");
		for(space=5;space>=i;space--){
			printf(" ");
		}
	}
	 
}

