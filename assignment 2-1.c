#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;
    printf("Enter the value of three angles: ");
    scanf("%d %d %d",&angle1,&angle2,&angle3);

    if(angle1,angle2,angle3!=0)
    {
        if((angle1+angle2+angle3)==180)
        {
            printf("This triangle is valid");
        }
        else
        {
            printf("This triangle is not valid");
        }

    }
    else
    {
        printf("This angle is not correct");
    }
    return 0;
}



