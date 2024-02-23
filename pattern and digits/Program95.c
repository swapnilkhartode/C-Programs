// There is a group of NN freinds who wish to enroll in a course together.

#include<stdio.h>
int main()
{
    int NN,MM,KK;

    printf("Enter the students who wish to enroll in a course together :\n");
    scanf("%d",&NN);

    printf("Enter the maximum capacity of students that can register for it :\n");
    scanf("%d",&MM);

    printf("Enter the number of students who already enrolled in a course :\n");
    scanf("%d",&KK);

    if(MM > 0 && MM <= 100)
    {
            if((MM - KK) >= NN)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No");
            }
    }
    else
    {
        printf("Invalid Data");
    }
    return 0;
}

