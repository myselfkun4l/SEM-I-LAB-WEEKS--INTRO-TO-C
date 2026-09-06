#include<stdio.h>
int main(){
	int num,sum=0,rev=0,number,copy;
	printf("Enter A Number:- ");
	scanf("%d",&num);
	
	copy = num;
	
	while (num>0){
		number=num%10;
		rev = rev*10 + number;
		sum = sum + number;
		num = num/10;
	}
	printf("Number Entered :- %d\n",copy);
	printf("Number After Reversing :- %d\n",rev);
	printf("Sum Of The Numbers :- %d\n",sum);
	
	return 0;
}