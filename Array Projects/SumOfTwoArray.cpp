#include<stdio.h>
#include<conio.h>
main(){
	
	int inp,i;
	int array1[10];
	int array2[10];
	
	printf("1st Array:\n");
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array1[i]= inp;
	}
	
	printf("\n2nd Array:\n");
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array2[i]= inp;
	}
	
	printf("The sum of the two array : \n");
	for(i=0;i<10;i++){
		printf("%d \t + %d \t = %d\n",array1[i],array2[i],array1[i]+array2[i]);
	}
}

