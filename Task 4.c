# include<stdio.h>

int main()

{
    int x, y, a, b, d;
    float c;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of  y: ");
    scanf("%d",& y);

    a=x/y;
    b=x%y;

    printf("The quotient is=%d\n",a);
    printf("The  remainder is=%d\n",b);

    c=(float)y/(float)x;
    d=y%x;

    printf("The swapping quotient is=%f\n",c);
    printf("The swapping remainder is=%d\n",d);

    return 0;




}
