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
	
	for(i=0;i<no;i++){
		for(j=0;j<row;j++){
			for(z=0;z<col;z++){
				array3d[i][j][z]= x;
				printf("%d  ",array3d[i][j][z]);
				x++;
			}
			printf("\n");
		}
		printf("\n");
	}
}
