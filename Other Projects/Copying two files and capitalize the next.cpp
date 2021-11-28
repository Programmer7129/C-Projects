#include<stdio.h>

main(){
	FILE *f1,*f2;
	char ch;
	int c=0;
	
	f1=fopen("d:\\consonant.txt","r");
	f2=fopen("d:\\klm.txt","w");
	while(ch!=EOF){
		ch= getc(f1);
		if(ch==' '){
			putc(ch,f2);
			c++;
		}
		else{	
			if(c!=0){
				if(ch>=65 && ch<=90){
					putc(ch,f2);
					c=0;
				}
				else if(ch>=97 && ch<=122){
					ch = ch-32;
					putc(ch,f2);
					c=0;
				}
				else{
					putc(ch,f2);
				}
			}
			else{
				putc(ch,f2);
			}
		}
	}
	fclose(f1);
	fclose(f2);
	
	printf("Done");
}
