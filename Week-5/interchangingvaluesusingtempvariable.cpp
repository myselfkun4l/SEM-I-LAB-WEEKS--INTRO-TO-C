#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter Value In a:- ");
	scanf("%d",&a);
	printf("Enter Value In b:- ");
	scanf("%d",&b);
	printf("The Value Of a Before Interchange:- %d\n",a);
	printf("The Value Of b Before Interchange:- %d\n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("The Value Of a After Interchange:- %d\n",a);
	printf("The Value Of b After Interchange:- %d\n",b);
	
	return 0;
}
