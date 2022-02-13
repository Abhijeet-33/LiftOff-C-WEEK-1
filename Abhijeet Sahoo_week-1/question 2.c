#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of 1st num :");
    scanf("%d",&a);
    printf("enter the value of 2nd num :");
    scanf("%d",&b);
    if (a>b)
    {
        printf("1st number is greater.");
    }
    else if(b>a)
    {
        printf("2nd number is greater.");
    }
    else
    {
        printf("both are same.");
    }
    return 0 ;
}