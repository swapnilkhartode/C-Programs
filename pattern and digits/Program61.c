// WAP to read the age of candidate and determine it is eligible for vote or note.


#include<stdio.h>

int main()
{
    int Age;

    printf("Enter the age of candidate :\n");
    scanf("%d",&Age);

    (Age >= 18) ? (printf("Congratulations!! Candidate is eligible for voting.")) : (printf("Candidate is not eligible for voting."));

    return 0;
}