#include<stdio.h>
#include<conio.h>
struct info{
	int roll;
	float marks[100];
	float percent;
};

main(){
	int numb,sub;
	
	printf("Enter the number of students: ");
	scanf("%d",&numb);
	
	printf("Enter the number of subjects: ");
	scanf("%d",&sub);
	
	struct info stu[numb];
	int i,j,a,b,c=0;
	float sum=0,prev=0;
	int temp,loc=0;
	char state;
	
	for(i=0;i<numb;i++){
		printf("\nEnter info for student %d:\n",i+1);
		for(j=0;j<sub+1;j++){	
			if(j==0){
				printf("Enter the roll no: ");
				scanf("%d",&stu[i].roll);
			}else{
				printf("Enter the marks %d: ",j);
				scanf("%f",&stu[i].marks[j-1]);
			}
		}
	}
	printf("\n");
	for(i=0;i<numb;i++){
		sum=0;
		stu[i].percent=0;
		for(j=0;j<sub+1;j++){
			if(j==0){
				printf("Info for Roll No %d : ",stu[i].roll);
			}
			else{
				printf("%.2f ",stu[i].marks[j-1]);	
				sum = sum + stu[i].marks[j-1];
				stu[i].percent = sum/sub;
			}
		}
		
		printf(" = %.2f ; Percentage = %.2f   %s",sum,stu[i].percent,state);
		printf("\n");
		
		if(prev<sum){
			prev= sum;
				loc++;
		}
		
	}
	
	printf("\nHighest marks are of student %d = %f  ; Percentage = %.2f",loc,prev,stu[loc-1].percent);
}
