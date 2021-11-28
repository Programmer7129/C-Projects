#include<stdio.h>
#include<string.h>
#include<ctype.h>
main(){
	
	FILE *f1;
	char ch;
	char input[20];
	int m,j=0,count=0;
	
	printf("Enter the word you want to count: ");
	scanf("%s",&input);
	
	m= strlen(input);
	
	f1=fopen("d:\\abc.txt","r");
	
	while(ch!= EOF){ //EOF means End of File.
		ch= getc(f1);
		printf("%c",ch);
		if(ch==input[j]){
			j++;			
		}
		if(isspace(ch)){
			j=0;
		}
		
		if(j==m){
			count++;
		}
		
	}
	printf("Number of times the word is used: %d",count);
	fclose(f1);
}
