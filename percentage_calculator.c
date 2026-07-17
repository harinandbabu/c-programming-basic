//to calculate kerala plus two percentage and total mark
//entering mark is should be compained mark of plus one and plus two with grace mark and ce mark
#include<stdio.h>
void main()
{
    char name[20];
    int no;
    float total,m1,m2,m3,m4,m5,m6,percentage;
    printf("Enter your name\n");
    scanf("%s",&name);
    printf("Enter your register number\n");
    scanf("%f",&no);
    printf("Enter your mark in english(out of 200)\n");
    scanf("%f",&m1);
    printf("Enter your mark in second language(out of 200)\n");
    scanf("%f",&m2);
    printf("Enter your mark in mathematics(out of 200)\n");
    scanf("%f",&m3);
    printf("Enter your mark in physics(out of 200)\n");
    scanf("%f",&m4);
    printf("Enter your mark in chemistry(out of 200)\n");
    scanf("%f",&m5);
    printf("Enter your mark in biology(out of 200)\n");
    scanf("%f",&m6);
    total=m1+m2+m3+m4+m5+m6;
    percentage=(total*100)/1200;
    printf("\n\n\n");
    int n = 40;
      for (int i = 0; i < n; i++)
       {
        printf("-");
       }
        printf("\n");
    printf("Student details\n");
    int a = 40;
      for (int i = 0; i < a; i++)
       {
        printf("=");
       }
        printf("\n");
    printf("Name:%s\n",name);
    printf("Register number:%d\n",no);
    printf("Total mark=%.0f/1200\n",total);
    printf("Percentage:%.2f\n",percentage);
    int b = 40;
      for (int i = 0; i < b; i++)
       {
        printf("=");
       }
        printf("\n");
}