#include<stdio.h>
#include<conio.h>

main()
{
int i,j,space,a=5;

/*for(i=5;i>=0;i--){
	
	space=5;
	for(space=5;space>=i;space--){
		printf(" ");
	}
	for(j=0;j<=i;j++){
		printf("*");
		printf(" ");
	}

	printf("\n");
}	*/	


for(i=0;i<=2;i++){
	for(j=0;j<=5;j++){
		if(i!=0){
		
			if(j>=i){
				printf("*");
			}else if(j>=a){
				printf(" ");
			}
		}
		else{
			printf("*");
		}
	}
	printf("\n");
}
}
