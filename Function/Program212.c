// Wap to perform following operations using function.

#include<stdio.h>
#define PI 3.14

float calAreaOfCircle(float No1)
{
    printf("\nThe of circle is : ");
    float AreaCircle;
    AreaCircle = PI*No1*No1;

    return AreaCircle;

}

float calAreaOfRectangle(float No1, float No2)
{
    printf("\nThe Area of rectangle is : ");
    float AreaRectangle=0;
    AreaRectangle = (2 *No1) + (2 * No2);
    
    return AreaRectangle;
}

float calAreaOfTraingle(float No1, float No2)
{
    printf("\nThe Area of traingle is : ");
    float AreaTraingle=0;
    AreaTraingle =  0.5*No1*No2;
    
    return AreaTraingle;
}

float calAreaOfQuadrilateral(float No1)
{
    printf("\nThe Area of Quadrilateral is : ");
    float AreaQuadrilateral=0;
    AreaQuadrilateral= No1*No1;

    return AreaQuadrilateral;
    

}

float calCircumference(float No1)
{
    printf("\nThe circumference  is : ");
    float circumfrnce=0;
    circumfrnce= 2* PI * No1;


    return circumfrnce;

}
 


int main()
{
    float a,b;
    float fRet=0;
    
    
    printf("Enter the value of a & b :");
    scanf("%f%f",&a,&b);

    fRet=calAreaOfCircle(a);
    printf("%f\n",fRet);

    fRet=calAreaOfRectangle(a,b);
    printf("%f\n",fRet);

    fRet=calAreaOfTraingle(a,b);
    printf("%f\n",fRet);

    fRet=calAreaOfQuadrilateral(a);
    printf("%f\n",fRet);

    fRet=calCircumference(a);
    printf("%f\n",fRet);


    return 0;



}