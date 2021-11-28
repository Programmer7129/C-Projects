#include<stdio.h>
#include<conio.h>
int area(int l,int b){
	return l*b;
}

main(){
	int l,b;
	
	printf("\nEnter the Length: ");
	scanf("%d",&l);
	
	printf("\nEnter the Breadth: ");
	scanf("%d",&b);
	
	printf("\nThe area is : %d",area(l,b));
}
