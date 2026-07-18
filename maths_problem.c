#include<stdio.h>
void main()
{
    char op;
    float a,b;
    printf("Enter operator:\n");
    scanf("%c",&op);
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    if(op=='+')
    {
        printf("Sum=%.2f",a+b);
    }
    else if(op=='-')
    {
        printf("Difference=%.2f",a-b);
    }
    else if(op=='*')
    {
        printf("Multiplication=%.2f",a*b);
    }
    else if(op=='/')
    {
         if (b==0)
        {
            printf("Division not possible");
        }
        else
        {
            printf("Division=%.2f",a/b);
        }
    }
    else
    {
        printf("Invalid operator");
    }
}