// Calculate count the digit of given number .

#include<stdio.h>

int main()
{
    int Digit,Counter,no;

    printf("Enter the number is :\n");
    scanf("%d",&no);



    (no > 0) ? (Counter++) : (printf("The number of digit is %d\n",Counter));
    no = no/10;

    (no > 0) ? (Counter++) : (printf("The number of digit is %d\n",Counter));
    no = no/10;

    (no > 0) ? (Counter++) : (printf("The number of digit is %d\n",Counter));
    no = no/10;

    (no > 0) ? (Counter++) : (printf("The number of digit is %d\n",Counter));
    no = no/10;

    (no > 0) ? (Counter++) : (printf("The number of digit is %d\n",Counter));
    no = no/10;

    return 0;



}
