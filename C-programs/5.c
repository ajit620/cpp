#include <stdio.h>

int main()
{
    char operator;
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the operator (+, -, *, /, %): ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        printf("%d\n", num1 + num2);
        break;
    case '-':
        printf("%d\n", num1 - num2);
        break;
    case '*':
        printf("%d\n", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
            printf("%d", num1 / num2);
        else
            printf("Error! Division by zero is not allowed.\n");
        break;
    case '%':
        if (num2 != 0)
            printf("%d\n", num1 % num2);
        else
            printf("Error! Modulus by zero is not allowed.\n");
        break;
    default:
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
