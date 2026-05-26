#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <float.h>


//From stack overflow, good to remember!!!!!!!!!
typedef struct {
  double *array;
  size_t used;
  size_t size;
} Array;

void initArray(Array *a, size_t initialSize) {
  a->array = malloc(initialSize * sizeof(int));
  a->used = 0;
  a->size = initialSize;
}

void insertArray(Array *a, int element) {
  // a->used is the number of used entries, because a->array[a->used++] updates a->used only *after* the array has been accessed.
  // Therefore a->used can go up to a->size 
  if (a->used == a->size) {
    a->size *= 2;
    a->array = realloc(a->array, a->size * sizeof(int));
  }
  a->array[a->used++] = element;
}

void freeArray(Array *a) {
  free(a->array);
  a->array = NULL;
  a->used = a->size = 0;
}
//end stack overflow bit

Array getNums(int a);
double comp(const void *a, const void *b) {
  	return *(double*)a - *(double*)b;
}
void calculate(Array nums);
Array numArray;

int main(){
    int totalNums;

    printf("How many numbers would you like to put in?");
    scanf("%d", &totalNums);

    getNums(totalNums);



    return 0;
}

Array getNums(int tNums){
    int i;
    initArray(&numArray, tNums);
    for (i = 0; i < tNums; i++) {
        double currentNum;
        printf("\nInput Number\n");
        scanf("%lf", &currentNum );
        insertArray(&numArray, currentNum);
    }
    return numArray;
}

void calculate(Array nums){
    double numTotal;
    int len = sizeof(&nums.array) / sizeof(nums.array[0]);
    int i;
    qsort(nums.array, len, sizeof(double), comp);
    double lowestNum = nums.array[len];
    double highestNum = nums.array[0];
    double average;
    for (i = 0; i < len; i++) {
        numTotal += nums.array[i];
    }
    average = numTotal / len;

    printf("\nThe average is %lf\n", average);
    printf("\nThe lowest number is %lf\n", lowestNum);
    printf("\nThe highest number is %lf\n", highestNum);


}