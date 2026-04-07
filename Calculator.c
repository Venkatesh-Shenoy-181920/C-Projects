#include <stdio.h>

int main()
{
    int num1, num2, result;
    char operator;
    printf("This is a Simple Calculator\n");
    printf("This calculator can add, subtract, multiply and divide.\n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Enter the operator +, -, x, /: ");
    scanf(" %c", &operator);

    printf("%d %c %d = ", num1, operator, num2);
    if (operator == '+')
    {
        result = num1 + num2;
    }
    else if (operator == '-')
    {
       result = num1 - num2;
    }
    else if (operator == 'x')
    {
        result = num1 * num2;
    }
    else if (operator == '/')
    {
        if (num2 == 0)
        {
            printf("ZeroDivisionError: Cannot divide by zero");
        }
        else
        {
            result = num1 / num2;
        }
    }
    printf("%d", result);
    return 0;
}