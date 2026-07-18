//This code is used to find the factorial of a number
#include<stdio.h>
int main()
{
    int n,i;
    long long int fact=1;
    printf("Enter the number to find factorial:");
    scanf("%d",&n);
 if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
else
    {
        for(i=1;i<=n;i++)
            {
                fact*=i;
            }
        }
printf("Factorial of %d=%lld",n,fact);
return 0;
}