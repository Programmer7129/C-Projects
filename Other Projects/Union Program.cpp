#include<conio.h>
#include<stdio.h>
struct stu {
	int no,e,h;
};
union student {
	int no,e,h;
};

main(){
	struct stu s1;
	union student s2;
		
	/*printf("Enter the roll no. for student 1 :");
	scanf("%d",&s1.no);
	
	printf("Enter the marks of hindi :");
	scanf("%d",&s1.h);	
	
	printf("Enter the marks of english :");
	scanf("%d",&s1.e);
	
	printf("\nInfo for student 1 : ");
	printf("%d  %d  %d\n",s1.no,s1.h,s1.e);
	
	//Student 2
	
	printf("\nEnter the roll no. for student 2 :");
	scanf("%d",&s2.no);
	
	printf("Enter the marks of hindi :");
	scanf("%d",&s2.h);
	
	printf("Enter the marks of english :");
	scanf("%d",&s2.e);
	
	printf("\nInfo for student 2 : ");
	printf("%d  %d  %d",s2.no,s2.h,s2.e);
	
	*/
	printf("\nSize = %d Siz = %d",sizeof(s1),sizeof(s2));
		
}
