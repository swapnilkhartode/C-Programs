#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float d,r1,r2;

    printf("Enter the a b c respectively :\n");
    scanf("%d %d %d",&a,&b,&c);

    d = (b*b) - (4*a*c );

    if(d>0)
    {
        r1 = (-b +sqrt(d))/2*a;
        r2 = (-b -sqrt(d))/2*a;

        printf("The values of roots r1 and r2 is : %f %f\n",r1,r2);
    }
    else if(d==0)
    {
        r1 = (-b +sqrt(d))/2*a;
        r2 = (-b -sqrt(d))/2*a;

        printf("THe roots are equal and their values are %f %f",r1,r2);
    }
    else
    {
        printf("The roots are imaginary\n");
    }

    return 0;
}