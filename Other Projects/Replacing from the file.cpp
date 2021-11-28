#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	
	f1=fopen("d:\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		
		if(ch==78||ch==110){
			ch='9';
		}
		printf("%c",ch);
	}
	fclose(f1);
}
