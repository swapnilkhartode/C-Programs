// Write menu driven program

#include<stdio.h>
int main()
{
    int No,rem=0,Rev,iCnt=0,swap,SumE=0,ch,Sum=0,p=1,last,first,mid1,mid2;

    printf("Menu");
    

    printf("1 : Reverse Number");
    printf("2 : Count Digits");
    printf("3 : Calculate Sum of digits");
    printf("4 : Calculate sum of only even numbers from digits ");
    printf("5 : Swap first and last");



    printf("Enter a choice\n");
    scanf("%d",&ch);

    printf("Enter the number\n :");
    scanf("%d",&No);

    switch(ch)
    {
        case 1 :

            while(No !=0) // 0
            {
                rem = No %10; 
                Rev = Rev*10 + rem;//321
                No = No/10; //0
            }
            printf("The Reversed number is %d\n",Rev);

            break;

        case 2:
              
              while(No!=0) 
              {
                 No=No/10;  
                 iCnt++;
              }
              printf("Number of digits are\n",iCnt);
              break;

        case 3:
             
             while(No!=0)//123
             {
                rem=No%10;//1
                Sum=Sum+rem;//6
                No=No/10;//0
             }
             printf("the sum of digits is:%d",Sum);

             break;

        case 4 :

           while(No != 0) // 12
           {
              rem = No % 10;  // 2

              if(rem % 2 == 0)
              {
                SumE = SumE + rem;
              }
              No = No/10; // 1
           }

           printf("The Sum of even digits from numbers is : %d\n",SumE);

           break;

        case 5 :

           while(No !=0) //  123
           {
             
           }


           break;



        default :
          printf("Wrong Choice");
            
          
    }

    return 0;

}