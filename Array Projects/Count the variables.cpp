#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name[200];   //64 to 90 is for A to Z
	int count,o,i,l=0,u=0;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("\Enter name : ");
	gets(name);
	
	for(i=0;i<strlen(name);i++){
		ch =name[i];
		if(ch>=65&&ch<=90){
			u++;
		}
		else if(ch>=96&&ch<=122){
			l++;
		}
		else{
			o++;
		}
	}
	printf("\nUpper : %d",u);
	printf("\nLower : %d",l);
}
