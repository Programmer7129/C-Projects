#include<stdio.h>
#include<conio.h>

main(){
	
	int inp,num,i=0,temp=0,n,val=0,cube,sum,fact=0;
	
	printf("Enter a number : ");
	scanf("%d",&inp);
	
	printf("Enter the no of digits : ");
	scanf("%d",&n);
	
	num = inp;
	while(i<n){
		temp = num%10;
		while(temp!=0){
			fact = fact+temp;
			temp--;
		}
		num = num/10;
		i++;
	}
	printf("\nThe sum of the factorial of the entered number is : %d",fact);

}
