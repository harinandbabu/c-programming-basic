#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("Enter operator:\n");
    scanf("%c",&op);
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    switch(op)
    {
        case '+':
        printf("Sum=%.2f",a+b);
        break;
        case '-':
        printf("Difference=%.2f",a-b);
        break;
        case '*':
        printf("Multiplication=%.2f",a*b);
        break;
        case '/':
            if (b==0)
            {
                printf("Division not possible");
            }
            else
            {
                printf("Division=%.2f",a/b);
            }
        break;
        default:
        printf("Invalid operator");
        break;
    }
return 0;
}