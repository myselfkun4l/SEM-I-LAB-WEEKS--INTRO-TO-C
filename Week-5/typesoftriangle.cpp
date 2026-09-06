#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter Triangles First Side:- ");
	scanf("%d",&a);
	printf("Enter Triangles Second Side:- ");
	scanf("%d",&b);
	printf("Enter Triangles Third Side:- ");
	scanf("%d",&c);
	
	if (b+c<=a || a+b<=c || c+a<=b){
		printf("Triangle Not Formed.\n");
	}
	if (pow(a,2)==pow(b,2)+pow(c,2)){
		printf("A Right Angled Triangle Is Formed.\n");
	}
	if (pow(a,2)>pow(b,2)+pow(c,2)){
		printf("Obtuse Angled Triangle Is Formed.\n");
	}
	if (pow(a,2)<pow(b,2)+pow(c,2)){
		printf("Acute Angled Triangle Is Formed.\n");
	}
	return 0;
}
