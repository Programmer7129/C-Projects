#include<stdio.h>
#include<conio.h>
main(){
	int array[5][3];
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Enter the value for [%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("\nThe Two Dimensional Array is : \n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
}
