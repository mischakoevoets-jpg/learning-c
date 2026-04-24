#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{
    double answer;
    double num1, num2;
    char operator;
    printf("Select number 1\n");

    scanf("%lf", &num1);

    printf("Select number 2\n");

    scanf("%lf", &num2);

    printf("select operator:\n");

    scanf("\n%c", &operator);

    switch (operator){
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            answer = num1 / num2;
            break;
        default:
            printf("Please select a valid operator!!!!!\n");
            answer = -DBL_MAX;
    }
    if(answer!=-DBL_MAX){
        printf("%.2lf\n", answer);
    }


    //only works on windows!!! remembwer to remove when home for linux
    system("pause");
    return 0;
}