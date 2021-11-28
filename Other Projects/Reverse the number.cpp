#include<stdio.h>
#include<conio.h>

main(){
	
	int inp,num,i=0,temp,n;
	
	printf("Enter a number : ");
	scanf("%d",&inp);
	
	printf("Enter the no of digits : ");
	scanf("%d",&n);
	
	num = inp;
	while(i<n){
		temp = num%10;
		//inp = inp/10;
		num = num/10;
		printf("%d",temp);
		i++;
	} 
}
