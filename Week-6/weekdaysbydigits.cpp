#include<stdio.h>

int main(){
	int choose;
	printf("Enter A Digit (1-7) To Know Week Day:- ");
	scanf("%d",&choose);
	
	switch (choose){
		case 1:
		printf("its MONDAY");
		break;
		
		case 2:
		printf("its TUESDAY");
		break;
		
		case 3:
		printf("its WEDNESDAY");
		break;
		
		case 4:
		printf("its THURSDAY");
		break;
		
		case 5:
		printf("its FRIDAY");
		break;
		
		case 6:
		printf("its SATURDAY");
		break;
		
		case 7:
		printf("its SUNDAY");
		break;
		
		default :
		printf("Invalid Input");
	}
		
	return 0;
}