// WAP to accept grade and display the equivalent description.

#include<stdio.h>

int main()
{
    char Grade;

    printf("Enter the grade :\n");
    scanf("%c",&Grade);

    (Grade == 'E')? printf("Excellent\n"):
    (Grade == 'V')? printf("Very Good\n"):
    (Grade == 'G')? printf("Good\n"):
    (Grade == 'A')? printf("Average\n"): 
    (Grade == 'F')? printf("FAil\n"): printf("Invalid Grade") ;


    return 0;

}