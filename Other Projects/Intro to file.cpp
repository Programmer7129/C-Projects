#include<stdio.h>

main()
{
	FILE *f1;
	char ch;
	int vowel;
	
	f1=fopen("d:\\abc.txt","r");
	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			vowel++;
		}
	}
	printf("\nVowels : %d",vowel);
	
	fclose(f1);
}
