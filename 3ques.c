#include <stdio.h>

int main()
{
    char op;
    int a, b;
    printf("Enter an operator (+,-,*,/,%) \n");
    scanf("%c", &op);
    printf("Enter numbers : \n");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;

    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;

    case '*':
        printf("%d x %d = %d", a, b, a * b);
        break;

    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;

    case '%':
        printf("%d / %d remainder = %d", a, b, a % b);
        break;

    default:
        printf("please enter a valid operator");
    }

    return 0;
}