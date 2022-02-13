#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    int x;
    printf("Enter the value of 1st number :");
    scanf("%f",&a);
    printf("Enter the value of 2nd number :");
    scanf("%f",&b);
    printf("Enter '1' for addition\n'2' for substraction.\n'3' for multipication\n'4' for division\n");
    scanf("%d",&x);
    switch (x)
    {
    case 1/* constant-expression */:
        /* code */
        printf("the sum of the two number is =%f",a+b);
        break;
    case 2:
        printf("the substraction of two number is =%f",a-b);
        break;
    case 3:
        printf("the multipication of two number is =%f",a*b);
        break;
    case 4:
        printf("the division of two number is =%f",a/b);
        break;            
    default:
        printf("wrong input.");
        break;    
    }
getch();
return 0;
}