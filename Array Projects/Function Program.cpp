#include<stdio.h>
#include<conio.h>
#include<string.h>

void Add();

main(){
	Add();
}

void Add(){
	int f,s;
	
	printf("\nEnter the first number : ");
	scanf("%d",&f);
	
	printf("\nEnter the second number : ");
	scanf("%d",&s);
	
	printf("\nSum : %d",f+s);
}

