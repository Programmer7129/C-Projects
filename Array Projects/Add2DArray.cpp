#include<stdio.h>
#include<conio.h>
main(){
	int array1[5][3];
	int array2[5][3];
	int sum[5][3];
	int i,j;
	
	printf("\n1st Array : \n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Enter the value for [%d][%d] :",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
	
	printf("\n2nd Array : \n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Enter the value for [%d][%d] :",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			sum[i][j] = array1[i][j] + array2[i][j];
		}
	}
	
	//Displaying 1st Array
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",array1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	//Displaying 2nd Array
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",array2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe sum of the two array is : \n");
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
