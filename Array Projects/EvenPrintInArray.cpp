#include<stdio.h>
#include<conio.h>
main(){
	int inp,i;
	int array[10];
	
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array[i]= inp;
	}
	
	printf("\nThe even numbers of the array is : \n");
	for(i=0;i<10;i++){
		if(array[i]%2==0){
			printf("%d ",array[i]);
		}
	}
	
}

