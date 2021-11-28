#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name1[200],name2[200];   //64 to 90 is for A to Z
	int i,pos,len,x=0;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("Enter string 1: ");
	scanf("%s",&name1);
	
	printf("Enter string 2: ");
	scanf("%s",&name2);
	
	for(i=0;i<strlen(name1);i++){
		if(name1[i]!=name2[i]){
			x=1;
			break;
		}
	}
	if(x==0){
		printf("\nBoth are same");
	}
	else{
		printf("\nBoth are not same");
	}

}



