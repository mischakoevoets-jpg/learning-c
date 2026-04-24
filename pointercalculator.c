#include <stdio.h>
#include <stdlib.h>
#include <float.h>

double add(double *a, double *b); 
double subtract(double *a, double *b); 
double multiply(double *a, double *b); 
double divide(double *a, double *b);
void calculate(double *a, double *b, char op, double *result);

int main()
{
    double answer;
    double *resptr = &answer;
    double num1, num2;
    double *ptr1 = &num1;
    double *ptr2 = &num2;
    char operator;
    double history[2];

    while(1){
    printf("Select number 1\n");

    scanf("%lf", &num1);

    printf("Select number 2\n");

    scanf("%lf", &num2);

    printf("select operator:\n");

    scanf("\n%c", &operator);

    calculate(ptr1, ptr2, operator, resptr);
    }

    // switch (operator){
    //     case '+':
    //         answer = add(ptr1, ptr2);
    //         break;
    //     case '-':
    //         answer = subtract(ptr1, ptr2);
    //         break;
    //     case '*':
    //         answer = multiply(ptr1, ptr2);
    //         break;
    //     case '/':
    //         answer = divide(ptr1, ptr2);
    //         break;
    //     default:
    //         printf("Please select a valid operator!!!!!\n");
    //         answer = -DBL_MAX;
    // }


    //only works on windows!!! remember to remove when home for linux
    system("pause");
    return 0;
}

void calculate(double *a, double *b, char op, double *result){
    switch (op){
        case '+':
            *result = add(a, b);
            break;
        case '-':
            *result = subtract(a, b);
            break;
        case '*':
            *result = multiply(a, b);
            break;
        case '/':
            *result = divide(a, b);
            break;
        default:
           printf("Please select a valid operator!!!!!\n");
           *result = -DBL_MAX;
    }
     printf("%.2lf\n", *result);

}

double add(double *a, double *b){
    double result = *a + *b;
    return result;
}

double subtract(double *a, double *b){
    double result = *a - *b;
    return result;
}

double multiply(double *a, double *b){
    double result = *a * *b;
    return result;
}

double divide(double *a, double *b){
    double result = *a / *b;
    return result;
}