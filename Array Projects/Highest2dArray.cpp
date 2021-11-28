#include<stdio.h>
#include<conio.h>
main(){
	int array2d[100][100];
	
	printf("\nEnter the number of rows : ");
	scanf("%d",&row);
	
	printf("\nEnter the number of columns : ");
	scanf("%d",&col);
	
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("Enter the value for [%d][%d] :",i,j);
			scanf("%d",&array2d[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("");
			scanf("%d",&array2d[i][j]);
		}
		printf("\n");
	}
}
