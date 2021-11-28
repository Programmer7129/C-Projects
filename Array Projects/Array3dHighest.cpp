#include<stdio.h>
#include<conio.h>
main(){
	int array3d[100][100][5];
	int row,col,no;
	int i,j,z;
	int x=0;
	
	printf("\nEnter the number of rows : ");
	scanf("%d",&row);
	
	printf("\nEnter the number of columns : ");
	scanf("%d",&col);
	
	printf("\nEnter the number of arrays : ");
	scanf("%d",&no);
	printf("\n");
	
	for(i=0;i<no;i++){
		for(j=0;j<row;j++){
			for(z=0;z<col;z++){
				printf("Enter the value of [%d][%d][%d] : ",i,j,z);
				scanf("%d",&array3d[i][j][z]);
			}
			//printf("\n");
		}
		printf("\n");
	}
	
	for(i=0;i<no;i++){
		for(j=0;j<row;j++){
			for(z=0;z<col;z++){
				printf("%d  ",array3d[i][j][z]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
