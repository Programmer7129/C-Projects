#include<stdio.h>
#include<conio.h>
main(){
	
	int inp,i;
	int array[10];
	int square[10];
	
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array[i]= inp;
	}
	for(i=0;i<10;i++){
		square[i]= array[i]*array[i];
	}
	
	printf("\nThe square of the numbers is :\n");
	for(i=0;i<10;i++){
		printf("%d \t %d\n",array[i],square[i]);
	}
}
