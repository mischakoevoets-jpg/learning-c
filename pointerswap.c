#include <stdio.h>
#include <stdlib.h>
#include <float.h>
void swapfunc(int *a, int *b);


int main(){
    int num1 = 6;
    int num2 = 7;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Num1: %i, Num2: %i\n", num1, num2);

    printf("Swapping...\n");

    swapfunc(ptr1, ptr2);

    printf("Num1: %i, Num2: %i\n", num1, num2);


    return 0;
}

void swapfunc(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}