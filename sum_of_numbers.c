#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter limit to find sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)  
    {
        sum=sum+i;
    }
printf("The sum of the first %d natural numbers=%d",n,sum);   
return 0;                     
}