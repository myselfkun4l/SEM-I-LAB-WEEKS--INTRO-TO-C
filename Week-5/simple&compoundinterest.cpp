#include<stdio.h>
#include<math.h>
int main(){
	float p,r,t;
	float si,ci,a;
	
	printf("Enter Principle Amount:- ");
	scanf("%f",&p);
	printf("Enter Rate Of Interest:- ");
	scanf("%f",&r);
	printf("Enter Amount Of Time(in years):- ");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("The Simple Interest Is:- %.2f\n",si);
	
	
	a=p*pow((1+r/100),t);
	ci = a-p;
	
	printf("The Compound Interest Is:- %.2f\n",ci);
	
	return 0;
	
}
