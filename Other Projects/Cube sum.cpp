#include<stdio.h>
#include<conio.h>

main(){
	
	int inp,num,i=0,temp=0,n,val=0,cube,sum;
	
	printf("Enter a number : ");
	scanf("%d",&inp);
	
	printf("Enter the no of digits : ");
	scanf("%d",&n);
	
	num = inp;
	while(i<n){
		temp = num%10;
		cube = temp*temp*temp;
		sum = sum +cube;
		num = num/10;
		i++;
	}
	printf("\nThe sum of the cube of the entered number is : %d",sum);
	
	if(sum==inp){
		printf("\nThe entered number is an Armstrong number.");
	}
	else{
		printf("\nThe entered number is not an Armstrong number.");
	}

}
