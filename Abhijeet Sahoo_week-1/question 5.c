#include<stdio.h>
int main()
{
    float r,pi=3.1415;
    printf("Enter the value of the RADIUS (in cm) :");
    scanf("%f",&r);
    printf("The diameter of the circle is =%f (in cm) \n",2*r);
    printf("The area of the circle is =%f (in sq. cm) \n",pi*r*r);
    printf("The circumeference of the circle is =%f (in cm) \n",2*pi*r);
    printf("thank u<3");
    getch();
    return 0;
}