#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name[200];   //64 to 90 is for A to Z
	int count,i,len;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("\Enter name : ");
	scanf("%s",&name);
	len = strlen(name);
	
	for(i=len-1;i>=0;i--){
		ch =name[i];
		printf("%c",ch);
	}
	
}
