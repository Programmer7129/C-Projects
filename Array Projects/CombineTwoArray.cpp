#include<stdio.h>
#include<conio.h>
main(){
		
	int inp,i,n1,n2,a=0,b=0;
	int array1[100];
	int array2[100];
	int main[100];
	
	printf("1st Array limit:");
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array1[i]= inp;
	}
	
	printf("\n2nd Array limit:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		array2[i]= inp;
	}
	
	//Printing The combined array
	printf("\nThe combined array is : ");
	for(i=0;i<(n1+n2);i++){
		if(i<n1){
			main[i] = array1[a];
			a++;
		}else if(i>=n1){
			main[i] = array2[b];
			b++;
		}
	}
	
	for(i=0;i<(n1+n2);i++){
		printf("\n%d",main[i]);
	}
	
	
}
