#include<stdio.h>

main(){
	FILE *f1,*f2,*f3;
	char ch,str;
	
	f1=fopen("d:\\abc.txt","r");
	f2=fopen("d:\\def.txt","r");
	f3=fopen("d:\\hij.txt","w");
	while(ch!=EOF){
		ch= getc(f1);
		putc(ch,f3);
		printf("%c",ch);
	}
	while(str!=EOF){
		str= getc(f2);
		putc(str,f3);
		printf("%c",str);
	}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	printf("\nCopied");
}
