#include<stdio.h>
#include<conio.h>
main(){
	
	int inp,i,a=0,b=0,sum_odd=0,sum_even=0;
	int array[10];
	int even[10];
	int odd[10];
	
	for(i=0;i<10;i++){
		printf("Enter the %d number : ",i+1);
		scanf("%d",&inp);
		if(inp%2==0){
			even[a]= inp;
			a++;
		}
		else if(inp%2!=0){
			odd[b]= inp;
			b++;
		}
	}
	
	for(i=0;i<b;i++){
		sum_odd = sum_odd + odd[i];
	}
	for(i=0;i<a;i++){
		sum_even = sum_even + even[i];
	}
	
	
	printf("\nThe sum of even numbers of the array is : %d",sum_even);
	printf("\nThe sum of odd numbers of the array is : %d",sum_odd);
}

