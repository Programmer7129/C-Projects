#include<stdio.h>

main(){
	FILE *f1,*f2;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\def.txt","w");
	while(ch!=EOF){
		ch= getc(f1);
		putc(ch,f2);
		printf("%c",ch);
	}
	fclose(f1);
	fclose(f2);
	printf("\nCopied");
}
