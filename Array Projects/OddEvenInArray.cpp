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
	
	printf("\nThe even and odd of the numbers is :\n");
	for(i=0;i<10;i++){
		
		if(array[i]==0){
			printf("\n%d \t Neither odd nor even",array[i]);
		}
		else if(array[i]%2==0){
			printf("\n%d \t Even",array[i]);
		}
		else if(array[i]%2!=0){
			printf("\n%d \t Odd",array[i]);
		}
		else{
			printf("Wrong Input");
		}
	}
}
