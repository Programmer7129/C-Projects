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
		if(array[i]>0){
			printf("\n%d \t %d",array[i],array[i]*-1);
		}
		else if(array[i<0]){
			printf("\n%d \t %d",array[i],array[i]*-1);
		}
	}
}

