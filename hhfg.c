#include<stdio.h>
void main()
{
    void print_line(int n)
{
    for (int i = 0; i < n; i++) {
        printf("=");
    }
    printf("\n");
}
print_line(20);
}