#include <stdio.h>
int main()
{
    int n;
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter the operation you want to do: \n 1. Addition\n2.Subtraction\n3. Multiplication\n4.Divison");
    switch (n)
    {
    case 1:
        printf("The addition of %d and %d is %d", a, b, a + b);
        break;
         case 2:
        printf("The subtraction of %d and %d is %d",a,b,a-b);
    
    case 3:
        printf("The multiplication of %d and %d is %d", a, b, a * b);
    case 4:
        printf("The division of %d and %d is %d", a, b, a / b);

    default:
        printf("Enter valid choice.");
        break;
    }
}