#include<stdio.h>
#include<conio.h>
main(){
	
	int inp,i,sum;
	int array[10];
	
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array[i]= inp;
	}
	
	for(i=0;i<10;i++){
		sum = sum + array[i];
	}
	printf("\nThe sum of the arrray is : %d",sum);
	
}
