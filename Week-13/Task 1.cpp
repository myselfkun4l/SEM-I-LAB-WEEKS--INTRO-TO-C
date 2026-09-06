#include <stdio.h>

void swapWithTemp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutTemp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x,y,u,v;
    printf("Enter two integers = ");
    scanf("%d %d", &x, &y);
    
    u = x;
    v = y;
    
    printf("Original Values : x = %d, y = %d\n", x, y);
    
    printf("\n\n...SWAPPING USING THIRD VARIABLE...\n\n");
    
    swapWithTemp(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    
    printf("\n\n...SWAPPING WITHOUT USING THIRD VARIABLE...\n\n");
    
    swapWithoutTemp(&v, &u);
    printf("After swap: x = %d, y = %d\n", u, v);
    return 0;
}
