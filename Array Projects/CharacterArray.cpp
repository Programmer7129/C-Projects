#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name[200];   //64 to 90 is for A to Z
	int count,i;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("\Enter name : ");
	scanf("%s",&name);
	
	for(i=0;i<strlen(name);i++){
		ch =name[i];
		if(ch<=90){
			ch = ch+32;
		}
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			count++;
		}
	}
	printf("\nThere are %d vowels in the string.",count);
}
