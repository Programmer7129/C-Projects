#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int space=0;
	
	f1=fopen("d:\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		
		if(ch==' '){
			space++;
		}
		printf("%c",ch);
	}
	printf("\nSpace = %d",space);
	fclose(f1);
}
