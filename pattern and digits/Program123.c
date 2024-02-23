// menu driven using switch case.

#include<stdio.h>
#include<math.h>

int main()
{
    int No,ch,iCnt,rem,iDigit,j , Armst=0,temp,temp1,flag=0,iFact=1,sum=0,iCnt1;

    printf("1 : Check number is armstrong or not\n");
    printf("2 : Check number is strong or not\n");
    printf("3 : Check number is duck or not\n");
    printf("4 : Check number is perfect or not\n");
    printf("5 : Check number is prime or not\n");

    printf("Enter the number :\n");
    scanf("%d",&No);

    printf("Enter the choice :\n");
    scanf("%d",&ch);

    temp=No;
    temp1=No;
    switch(ch)
    {
        case 1 : 
           for(iCnt=0;No!=0;iCnt++)
           {
               
                 No=No/10;   
           }
           printf("%d digits : ",iCnt);
           iDigit=iCnt;
           for(;temp !=0;)
            {
                  rem= temp%10;
                  Armst = Armst + pow(rem,iDigit);
                  temp = temp/10;
                  
                  if(Armst == temp1)
                  {
                    flag=1;
                    break;

                  }
            } 
            if(flag==1)
            {
                printf("The Number is armstrong");
            } 
            else
            {
                printf("The number is not Armstrong");
            }

            break;


        case 2 :

          for(;No!=0;)
          {
            
            rem = No%10;//5
            for(iCnt1=rem;iCnt1>0;iCnt1--)
            {
                iFact= iFact*iCnt1;

            }
           
            sum= sum+iFact;
            iFact=1;
            
            if(temp1==sum)
            {
                flag=1;
                break;
            }

            No=No/10;
          }
          
          if(flag==1)
          {
            printf("The given number %d is strong : \n",sum);
          }
          else
          {
             printf("The given number is not strong");
          }
          break;

        case 3 :

           for(;No!=0;)
           {
              rem = No%10;

              if(rem==0)
              {
                flag=1;
                break;
              }
              No=No/10;

           }
           if(flag==1)
           {
              printf("The number is duck");

           }
           else
           {
              printf("The number is not duck");
           }
           break;

        case 4 :

             for(iCnt=1;iCnt <=(No/2);iCnt++)
             {
               if(No%iCnt == 0)
               {
                sum = sum + iCnt;
               }

             }
             if(sum==No)
             {
                  printf("The given number is perfect");
             }
             else
             {
                  printf("The given number is not perfect");
                  
             }
             break;

        case 5 :

            if(No==1)
            {
              printf("1 is a composite number");
              return 0;
              
            }
            

            for(iCnt=2;iCnt<=(No/2);iCnt++)
            {
              if(No%iCnt == 0)
              {
                flag =1;
                break;
              }
            }
            if(!flag)
            {
              printf("The number is prime");
            }
            else
            {
              printf("The number is not prime");
              
            }
            break ;

        default :

           printf("Out of Range");
    
    }
  return 0;

}