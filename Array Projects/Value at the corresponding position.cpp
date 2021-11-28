#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name[200];   //64 to 90 is for A to Z
	int pos;      //96 to 122 is for a to z
	char ch,val;          //Add 32 to convert
	
	printf("Enter string : ");
	gets(name);
	
	printf("\nEnter the position : ");
	scanf("%d",&pos);
	
	val = name[pos];
	printf("\nThe value at the entered position is : %c",val);
}

