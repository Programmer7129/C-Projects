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
		printf("%c",ch);
		if(ch=='k'||ch=='K'){
			count++;
		}
	}
	printf("\nNo. of K in the file are : %d",count);
	fclose(f1);
}

