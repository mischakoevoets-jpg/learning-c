#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer;
    int num1, num2;
    char operator;
    printf("Select number 1\n");

    scanf("%i", &num1);

    printf("Select number 2\n");

    scanf("%i", &num2);

    printf("select operator:\n");

    scanf("\n%c", &operator);

    if(operator == '+')
    {
        answer = num1 + num2;
        printf("Answer= %d\n", answer);
    }
    if(operator == '-')
    {
        answer = num1 - num2;
        printf("Answer= %d\n", answer);
    }
    if(operator == '*' || operator == 'x')
    {
        answer = num1 * num2;
        printf("Answer= %d\n", answer);
    }
    if(operator == '/')
    {
        answer = num1 / num2;
        printf("Answer= %d\n", answer);
    }


    return 0;
}