#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Value In a:- ");
	scanf("%d",&a);
	printf("Enter Value In b:- ");
	scanf("%d",&b);
	printf("The Value Of a Before Interchange:- %d\n",a);
	printf("The Value Of b Before Interchange:- %d\n",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("The Value Of a After Interchange:- %d\n",a);
	printf("The Value Of b After Interchange:- %d\n",b);
	
	return 0;
}
