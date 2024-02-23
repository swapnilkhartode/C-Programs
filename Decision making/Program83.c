#include<stdio.h>

int main()
{ 
    int guard1,guard2;
    printf("enter a gaurd1 and gaurd2\n");
    scanf("%d%d",&guard1,&guard2);

    if(guard1>=guard2)
    {
        printf("YES");

    }
    else
    {
        printf("NO");
    }
    return 0;
}