#include<stdio.h>
#include<conio.h>
struct stu{
	int roll;
	float e,h;
	int std;
};
main(){
	struct stu stud[5];
	int i,j,loc=0,input;
	
	//Taking the values. 
	for(i=0;i<5;i++){
		printf("\nEnter info for student %d:\n",i+1);
	
		printf("Enter the roll no: ");
		scanf("%d",&stud[i].roll);
		printf("Enter your standard : ");
		scanf ("%d",&stud[i].std);
		printf("Enter marks of english :");
		scanf("%f",&stud[i].e);
		printf("Enter marks of hindi :");
		scanf("%f",&stud[i].h);
	}
	
	printf("\n Enter the roll no for which you want to get the record : ");
	scanf("%d",&input);
	for(i=0;i<5;i++){
		if(input == stud[i].roll){
			loc=i;
		}	
		else{
			printf("\nInvalid roll no.");
			loc=10;
			break;
		}
	}
	
	if((loc>=0)&&(loc<5)){
		printf("\nInfo for roll no %d :",loc+1);
		printf("\n \t Roll no = %d",stud[loc].roll);
		printf("\n \t Standard = %d",stud[loc].std);
		printf("\n \t English = %f",stud[loc].e);
		printf("\n \t Hindi = %f",stud[loc].h);
	}
	else{
		printf("\nNo records for this roll no.");
	}
}
