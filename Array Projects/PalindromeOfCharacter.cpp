#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name[200],rev[200]={""};   //64 to 90 is for A to Z
	int i,pos,len,x=0;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("Enter string : ");
	scanf("%s",&name);
	
	len = strlen(name)-1;
	for(i=0;i<strlen(name);i++){
		if(name[i]!=name[len]){
			x=1;
			break;
		}
		len--;

		if(x==0){
			printf("\nYes the entered string is palindrome");
		}
		else{
			printf("\nNo the entered string is not palindrome");
		}
	}	
}
