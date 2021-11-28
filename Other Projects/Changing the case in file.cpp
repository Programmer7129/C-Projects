#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int count=0;
	
	f1=fopen("d:\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		//printf("%c",ch);
		if(ch>=92&&ch<=122){
			ch= ch-32;
			printf("%c",ch);
		}
		else if(ch>=65&&ch<=90){
			ch = ch+32;
			printf("%c",ch);
		}
	}
	
	fclose(f1);
}
