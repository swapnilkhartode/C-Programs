// Ezio Can manipulate guard

#include<stdio.h>

int main()
{

    int XX, YY;

    printf("Enter the Ezio can manipulate at most guards :\n");
    scanf("%d",&XX);

    printf("Enter the No of guards there :\n");
    scanf("%d",&YY);

    if((XX == YY) || (XX > YY))
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}8