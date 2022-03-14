#include <stdio.h>

int main()
{
    double a, r, h,
    volume1, volume2,PI=3.1416;

    printf("Enter length of cube: ");
    scanf("%lf",&a);
    printf("Enter radius of cylinder: ");
    scanf("%lf",&r);
    printf("Enter height of cylinder: ");
    scanf("%lf",&h);

    volume1=a*a*a;
    volume2=PI*r*r*h;

    printf(" the volume of cube=%.2f\n",volume1 );
    printf(" the volume of ccylinder=%.2f\n",volume2 );

    return 0;

}
