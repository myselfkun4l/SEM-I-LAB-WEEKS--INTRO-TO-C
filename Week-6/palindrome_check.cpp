#include<stdio.h>
int main(){
	int num,newnum,copy;
	printf("Enter Number To Check Palindrome:- ");
	scanf("%d",&num);
	
	copy = num;
	int result=0;
	
	while(num!= 0){
	newnum=num%10;
	result = result*10 + newnum;
	num /= 10;
	}
	if (result == copy){
		printf("The Number %d Is A Palindrome.",copy);
	}else{
		printf("The Number %d Is Not A Palindrome",copy);
	}
	return 0;
}