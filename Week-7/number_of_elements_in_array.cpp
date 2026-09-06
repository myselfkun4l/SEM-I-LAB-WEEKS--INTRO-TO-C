#include <stdio.h>

int main() {
    int n =0, i=1;
    int arr[100]; 
    while(i != -1){
    	printf("enter number in array:- ");
    	scanf("%d",&arr);
    	n++;
    	printf("enter -1 for exit:- ");
    	scanf("%d",&i);
	}
	
	printf("Number of elements in the array: %d\n",n );

    return 0;
}


