#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter a number");
    scanf("%f",&a);
    printf("Enter another number");
    scanf("%f",&b);
    c=a/b;
    if (b==0)
    {
        printf("Division not possible");
    }
    else
    {
        printf("Division=%f",c);
    }
}