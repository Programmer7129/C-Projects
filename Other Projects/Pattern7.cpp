#include<stdio.h>
#include<conio.h>

main(){
	
	int space,i,j;
	char a ='*';
	
	for(i=1;i<=5;i++){
		space =0;
		for(space=5;space>=i;space--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("%c",a);
			printf(" ");
		}
		printf("\n");
		
		
	}
}
