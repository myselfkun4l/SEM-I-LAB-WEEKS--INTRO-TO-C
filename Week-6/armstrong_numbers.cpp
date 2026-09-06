#include<stdio.h>
int main()
{
	int num,copy,result,rem;
	printf("Armstrong Numbers Between 0-999 Are:- \n");
	
	for (num=0;num<=999;num++){
		copy = num;
		result = 0;
		while (copy != 0){
			rem = copy%10;
			
			result += rem*rem*rem;
			
			copy=copy/10;
			
		}
		
		if (result == num){
			printf("%d\n",num);
		}
	}
	return 0;
}