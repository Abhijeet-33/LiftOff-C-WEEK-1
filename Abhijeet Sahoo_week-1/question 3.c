#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter the number :");
    scanf("%d",&x);
    n=x%2;
    switch (n)
    {
    case 0 :
        printf("This is a even number ;)");
        break;
    
    default:
        printf("This is a odd number :( ");
        break;
    }
    getch();
    return 0;
}