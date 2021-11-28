#include<stdio.h>
#include<conio.h>

main(){
	
	int inp,num,i=0,temp=0,n,val=0;
	
	printf("Enter a number : ");
	scanf("%d",&inp);
	
	printf("Enter the no of digits : ");
	scanf("%d",&n);
	
	num = inp;
	while(i<n){
		val = val*10;
		temp = num%10;
		val = val + temp;
		//inp = inp/10;
		num = num/10;
		i++;
	}
	printf("\nThe reverse of the entered number is : %d",val);
	
	if(val==inp){
		printf("\nYes it is a palindrome number.");
	}
	else{
		printf("\nNo THe number is not a palindomre number.");
	}

}
