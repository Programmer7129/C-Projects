#include<stdio.h>
#include<conio.h>

main(){
	int inp,n,i,j;
	int array[100];
		
	printf("Enter the limit : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter the %d number :",i+1);
		scanf("%d",&inp);
		array[i]= inp;
	}
	
	printf("\nThe array is : ");
	for(i=0;i<n;i++){
		printf("\n%d ",array[i]);
	}
	
}
