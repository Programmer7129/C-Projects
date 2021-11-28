#include<stdio.h>
#include<conio.h>

main(){
	int inp,n,i,temp,num,val,sum=0;
	
	printf("Enter a number: ");
	scanf("%d",&inp);
	
	printf("Enter the number if digits: ");
	scanf("%d",&n);
	
	num =inp;
	while(i<n){
		//val = val + temp;
		temp = num%10;
		sum = sum +temp;
		num = num/10;
		i++;
	}
	printf("\nThe sum of the digits is : %d",sum);
}
