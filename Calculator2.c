// Calculator version 2
// By S. Venkatesh Shenoy
#include <stdio.h>
#include <stdbool.h>

int main()
{
    //Welcome Message
    printf("This is a Basic Calculator\n");
    printf("It can do Addition, Subtraction, Multiplication, Division  of 2 Numbers\n");
    printf("To exist type q and then press enter\n");
    
    //The operator symbols
    printf("+ : Addition\n");
    printf("- : Subtraction\n");
    printf("x : Multiplication\n");
    printf("/ : Division\n");

    float num1, num2, result; 
    char operator;
    bool value;
    
    value = 1;
    while (value == 1)
    {   // Sorry for making you enter the operator first which is not what a normal calculator does I am still figuring this out :)
        printf("Enter the operator: ");
        scanf(" %c", &operator);

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);
        
        // LHS
        printf("%.2f %c %.2f = ", num1, operator, num2); 

        //Addition
        if (operator == '+')
        {
            result = num1 + num2;
        }
        
        //Subtraction
        else if (operator == '-')
        {
            result = num1 - num2;
        }
        
        //Multiplication
        else if (operator == 'x')
        {
            result = num1 * num2;
        }
        
        //Division
        else if(operator == '/')
        {
            if (num2 == 0)
            {
                //Zero Division Error
                printf("ZeroDivisionError: Cannot divide by 0");
            }
        
            else 
            {
                result = num1 / num2;
            }
        }

        //Exit message
        else if(operator == 'q')
        {   
            printf("\nExiting the calculator...\n");
            printf("Calculator exitted successfully to restart calculator type .\\main.exe");
            break;
        }
        
        //RHS
        printf("%.2f\n", result);
    }
    
    return 0;
}
