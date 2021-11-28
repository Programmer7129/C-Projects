#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char name1[200],name2[200],main[200];   //64 to 90 is for A to Z
	int count,i,len,a=0,b=0;      //96 to 122 is for a to z
	char ch;          //Add 32 to convert
	
	printf("\Enter name  1: ");
	scanf("%s",&name1);
	
	printf("\Enter name 2: ");
	scanf("%s",&name2);
	
	len = strlen(name1)+strlen(name2);
	for(i=0;i<len;i++){
		 if(i<strlen(name1)){
		 	 main[i]= name1[a];
		 	 a++;
		 }
		 else if(i>=strlen(name1)){
		 	main[i]=name2[b];
		 	b++;
		 }
	}
	
	for(i=0;i<len;i++){
		printf("%c",main[i]);
	}
}
