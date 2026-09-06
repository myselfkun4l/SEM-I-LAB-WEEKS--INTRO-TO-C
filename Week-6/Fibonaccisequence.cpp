#include<stdio.h>
int main(){
	int num;
	printf("Enter Number Upto Which Print Fibonacci Series:- ");
	scanf("%d",&num);
	
	int a,b,next,i;
	a = 0;
	b = 1;
	
	for (i = 0; i<=num; i++){
		printf("%d ",a);
		next = a + b;
		a = b;
		b = next;
	}
	return 0;
}