#include<stdio.h>
#include<conio.h>
main(){
	
	int inp,i,j;
	int array[10];
	int temp,n=10;
	
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array[i]= inp;
	}
	
	for(i=0;i<=n;i++){
		for(j=0;j<=n-1;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j]= array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	printf("\nThe array in ascending order is : ");
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	
	printf("\nThe max from the array is :%d",array[9]);
}
