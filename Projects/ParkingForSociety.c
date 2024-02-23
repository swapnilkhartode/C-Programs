#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#pragma pack(1)  // it reduces the padding.means it reduces the wasting of memory.

struct owner
{
    int id;
    char name[90];
    int birth_date[8];
    int Parking_No;
    struct owner * next;       
};

struct owner * Head=NULL;   // 
int OwnStringCmp(char name[],char name1[])
{
    int count=0,diff=0,Flag=1;
    int Length=0,Length1=0;
    while(name[Length]!='\0')
    {
        Length++;
    }
    while(name[Length1]!='\0')
    {
        Length1++;
    }
    
    if(Length==Length1)
    {
        while(name[count]!='\0')
       {
            diff=name[count]-name1[count];
            if(diff==0)
            {
                Flag=0;
                break;
            }
            ++count;
        }
        return Flag==1?0:diff;
    }
    else
    {
        return -1;
    }
    
}
void InsertLast()
{
    // Check Linked list is empty or not

        struct owner *temp2;
        temp2=Head;
       
        if(Head==NULL)
        {
            // Allocate the memory for new node
            Head = (struct owner *)malloc(sizeof(struct owner));

            // Initialise the node
            printf("Please Enter the Flat id \n");
            scanf("%d",&Head->id);

            printf("Please Enter the Parking number\n");
            scanf("%d",&Head->Parking_No);

            printf("Please Enter the Name of owner\n");
            scanf("%s",&Head->name);

            printf("Please Enter the Birth Date in DDMMYYYY Format\n");
            for(int i=0;i<8;i++)
            {
                scanf("%d",&Head->birth_date[i]);
            }


            Head->next=NULL;
 
        }
        
        // If linked list contains atleast one node
        else
        {
            struct owner *temp1,*temp ;
            int FlatId,ParkingnO;
            
            printf("Please Enter the Flat Number & Parking Number Respectively\n");
            scanf("%d %d",&FlatId,&ParkingnO);
            while(temp2!=NULL)
            {
               if((temp2->id==FlatId))
               {
                    printf("This Flat Number is Already Booked !!!\n");
                    return;
               }
               if(temp2->Parking_No==ParkingnO)
               {
                   printf("This Parking Number is Already Booked !!!\n");
                    return;
               }
               temp2=temp2->next;    // 
              
            } 
            
            // Allocate the memory for new node.
            temp=(struct owner *)malloc(sizeof(struct owner));

            //  Initialise the node
            temp->id=FlatId;
            temp->Parking_No=ParkingnO;

            printf("Please Enter the Name of owner\n");
            scanf("%s",&temp->name);

            printf("Please Enter the Birth Date\n");
            for(int i=0;i<8;i++)
            {
                scanf("%d",&temp->birth_date[i]);
            }

            temp->next=NULL;

            temp1=Head;
        
            while(temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->next=temp; 
        }   
        printf("\nInformation Inserted Succesfully!!!\n");
}

void display()
{
   struct owner *temp;
   temp=Head;
   int iCnt=0;
   printf("Flat Number --Parking Number -- Owner Name -- Birth date\n");
    while(temp!=NULL)
    {   
        if(iCnt>0)
        {
            printf("->");
        }
        // It displays all information about owner
        printf("|%d--%d--%s--",temp->id,temp->Parking_No,temp->name);
        for(int i=0;i<8;i++)
        {
            printf("%d|",temp->birth_date[i]);
    
            if(i%2!=0 && i<4) // for i=1,3 if block executes
            {
                printf("/");
            }
            
        }
        iCnt++;
        temp= temp->next;
    }
   
}

void displayOwnerByid()
{
    int ID,iCnt=0;

    printf("Please enter the ID\n");
    scanf("%d",&ID);

    struct owner *temp;
    temp=Head;
    while(temp!=NULL)
    {   // if Search key== temp->id then respective owner name print 
        if(ID == temp->id)
        {
            printf("The Owner name is : %s",temp->name);
            iCnt=1;
            break;
        }
        temp = temp->next;
    }
    if(iCnt==0)
    {
        printf("\nGiven Flat Number is  not found !!!!!\n");
        printf("Please enter the valid Flat number\n");
    }
}

void displayFlatIdByName()
{
    char ch[90];
    int iCnt=0;

    printf("Please enter the Owner  Name\n");
    scanf("%s",&ch);

    struct owner *temp;
    temp=Head;
    while(temp!=NULL)
    {
        if(strcmp(temp->name,ch)==0)
        {
            if(iCnt>0)
            {
                printf("->");
            }
            printf("|%d|",temp->id);
            iCnt++;

        }
        temp = temp->next;

    }
    if(iCnt==0)
    {
        printf("\nGiven Owner Name is  not found !!!!!\n");
        printf("Please enter the valid name\n");

    }  
}

void displayAllOwner()
{
    struct owner *temp;
    int iCnt=0;

   temp=Head;
    while(temp!=NULL)
    {
        if(iCnt>0)
        {
            printf("->");
        }
        printf("|%s|",temp->name);
        iCnt++;
        temp= temp->next;
    }
   
    
}

int countTotalFlat()
{
    int NodeCnt=0;
    struct owner *temp;
    temp=Head;
    while(temp!=NULL)
    {
       
        NodeCnt++;
        temp=temp->next;
    }
    return NodeCnt;

}
int countUnsoldFlat()
{
    struct owner *temp;
    temp=Head;
    char ch[]="Empty";
    int iCnt=0;

    while(temp!=NULL)
    {
        if(strcmp(temp->name,ch)==0)
        {
            iCnt++;
            
        }
        temp=temp->next;
    }
    return iCnt;

}
int countsoldFlat()
{
    int NodeCnt=0;
    struct owner *temp;
    temp=Head;
    char ch[]="Empty";

    while(temp!=NULL)
    {
        if(strcmp(temp->name,ch)==0)
        {
            temp=temp->next;
            continue;
            
        }
        else
        {
            NodeCnt++;
        }
        
        temp=temp->next;
    }
    return NodeCnt;

}
void DeleteFirst()
{
    
    struct owner *temp;
    int No=0;  
    temp=Head; 
    int Arr[8]={0};
    int len=sizeof(Arr)/sizeof(Arr[0]);
    
    char ch[90];
    printf("In DeleteFirst");
    strcpy(ch,temp->name);//hithe kiva char *ch la gadbad ahe.
    
    printf("\nDeleted Owner is %s\n",ch);
    temp->id=No;
    temp->Parking_No=No;
    strcpy(temp->name,"Empty");
    for(int i=0;i<len;i++)
    {
        temp->birth_date[i]=Arr[i];
    }
    
    printf("\nOwner info succesfully Deleted\n");
        
}
void DeleteLast(int iPos)
{
    struct owner *temp;
    int Arr[8]={0};
    int len=sizeof(Arr)/sizeof(Arr[0]);
    
    int No=0,iCnt;
    temp=Head;
    for(iCnt=1;iCnt<iPos;iCnt++)
    {
        temp=temp->next;
    }
        char ch[90];
        strcpy(ch,temp->name);
        printf("\nDeleted Owner is %s\n",ch);
        temp->id=No;
        temp->Parking_No=No;
        strcpy(temp->name,"Empty"); 
        for(int i=0;i<len;i++)
        {
            temp->birth_date[i]=Arr[i];
        }
        printf("\nOwner info succesfully Deleted\n");
}

void DeleteAtPos()
{
    struct owner *temp;
    char ch[90];
    
    
    temp=Head;
    int NodeCnt=countTotalFlat(),FlatNo,iPos=0;

    printf("Enter the Flat ID Which you want to delete\n");
    scanf("%d",&FlatNo);

    while(temp!=NULL)
    {
        iPos++;
        if(FlatNo==temp->id)
        {
            break;
        }
        temp=temp->next;
    }
    printf("The Position of deleted info  is : %d",iPos);
    

    if((iPos < 1) || (iPos > NodeCnt))
    {
        if(iPos<1)
        {
            printf("All Flats are empty");

        }
        return;
    }

    if(iPos==1)
    {
        DeleteFirst();

        
    }
    else if(iPos==NodeCnt)
    {
        DeleteLast(iPos);
        
    }
    else
    {
        
        struct owner *temp2;
        int iCnt=0;
        temp2=Head;
        int No=0;
        for(iCnt=1;iCnt<iPos;iCnt++)
        {
            temp2=temp2->next;

        }
        
        int Arr[8]={0};
        int len=sizeof(Arr)/sizeof(Arr[0]);
        char ch[90];
        strcpy(ch,temp2->name);
        printf("\nDeleted Owner is : %s\n",ch);
        temp2->id=No;
        temp2->Parking_No=No;
        strcpy(temp2->name,"Empty");
        for(int i=0;i<len;i++)
        {
            temp->birth_date[i]=Arr[i];
        }
         
        printf("\nOwner info Successfully Deleted!!!!\n");
    }
    
}

void UpdateOwnerinfoByFlatid()
{
    struct owner *temp,*temp2;
    temp=Head;
    while(temp!=NULL)
    {    
        
       
        int choice=0;
        do
        {
            int ParkNo,FlatNo;
            char ch[90];
            temp2=Head;
            printf("\n1 : Update only Parking Number\n");
            printf("2 : Update only Flat Number\n");
            printf("3 : Update only Owner Name and Birth Date\n");
            printf("4 : For Update Parking Number and Flat Number\n");
            printf("5 : For Update Flat Number and Owner Name and Birth date\n");
            printf("6 : For Update Owner Name and Parking number and Birth Date\n");
            printf("7 : Exit (Enter the 10)\n\n");
                
            printf("\nPlease Enter the chioce\n");
            scanf("%d",&choice);
            

            //  switch case for Update the information of owner.
                switch(choice)// choice=10(exit)
                {
                    case 1 :
                        
                        printf("\nPlease Enter the Parking Number\n");
                        scanf("%d",&ParkNo);
                        while(temp2!=NULL)
                        {
                            if(temp2->Parking_No==ParkNo)
                            {
                                printf("\nThis Parking Number is Already Booked !!!\n");
                                return;
                            }
                            temp2=temp2->next;
                        } 
                        temp->Parking_No=ParkNo;
                        printf("\nParking Number is Updated Sucessfully !!!!!\n");
                        break;

                    case 2 :
                        
                        printf("\nPlease Enter the Flat Number\n");
                        scanf("%d",&FlatNo);
                        while(temp2!=NULL)
                        {
                            if(temp2->id==FlatNo)
                            {
                                printf("\nThis Flat Number is Already Booked !!!!!\n");
                                return;
                            }
                            temp2=temp2->next;
                        } 
                        temp->id=FlatNo;
                        printf("\nFlat Number is Updated Sucessfully  !!!!!\n");
                        break;

                    case 3 :
                        
                        printf("\nPlease Enter the Owner Name\n");
                        scanf("%s",&ch);
                        strcpy(temp->name,ch);
                        printf("\nPlease Enter the Birth Date in DDMMYYYY Format\n");
                        // 8 because we use DDMMYYYY format and it contains 8 digits.
                        for(int i=0;i<8;i++)
                        {
                            scanf("%d",&temp->birth_date[i]);
                        }
                        printf("\nOwner Name & Birth Date Updated Sucessfully !!!!!\n");
                        break;

                    case 4 :

                        printf("Please enter the Parking Number and Flat Number Respectively\n");
                        scanf("%d %d",&ParkNo,&FlatNo);
                        while(temp2!=NULL)
                        {
                            if(temp2->id==FlatNo)
                            {
                                printf("\nThis Flat Number is Already Booked !!!\n");
                                return;
                            }
                            if(temp2->Parking_No==ParkNo)
                            {
                                printf("\nThis Parking Number is Already Booked !!!\n");
                                return;
                            }
                            temp2=temp2->next;
                        } 
                        temp->Parking_No= ParkNo;
                        temp->id= FlatNo;
                        printf("\nParking Number and Flat Number Updated Sucessfully\n");
                        break;

                    case 5 :

                        printf("Please enter the Flat Number and Owner Name Respectively\n");
                        scanf("%d %s",&FlatNo,&ch);
                        while(temp2!=NULL)
                        {
                            if(temp2->id==FlatNo)
                            {
                                printf("\nThis Flat Number is Already Booked !!!\n");
                                return;
                            }
                            temp2=temp2->next;
                        } 
                        temp->id=FlatNo;
                        strcpy(temp->name,ch);
                        printf("\nPlease Enter the Birth Date in DDMMYYYY Format\n");
                        // 8 because we use DDMMYYYY format and it contains 8 digits.
                        for(int i=0;i<8;i++)
                        {
                            scanf("%d",&temp->birth_date[i]);
                        }
                        printf("Flat Number and Owner Name and Birth Date Updated Sucessfully !!!!!\n");
                        break;

                    case 6 :
                         
                        printf("\nPlease enter the Owner Name and Parking Number\n");
                        scanf("%s %d",&ch,&ParkNo);
                        strcpy(temp->name,ch);
                        while(temp2!=NULL)
                        {
                            if(temp2->Parking_No==ParkNo)
                            {
                                printf("\nThis Parking Number is Already Booked !!!\n");
                                return;
                            }
                            temp2=temp2->next;
                        } 
                        temp->Parking_No=ParkNo;
                         printf("\nPlease Enter the Birth Date\n");
                        // 8 because we use DDMMYYYY format and it contains 8 digits.
                        for(int i=0;i<8;i++)
                        {
                            scanf("%d",&temp->birth_date[i]);
                        }
                        printf("Owner Name and Parking Number and Birth Date Updated Sucessfully !!!!!\n");
                        break;

                    default :
                        printf("Wrong Choice\n");

                }
            }
            while(choice!=10);
 
        
        temp = temp->next;
    }
   
}

int CountSameNameOwner()
{
    int NodeCnt=0;
    struct owner *temp;
    temp=Head;
    char ch[90];
    int result;
    printf("\nPlease Enter the Name\n");
    scanf("%s",&ch);
    

    while(temp!=NULL)
    {
        if(result=OwnStringCmp(ch,temp->name)==0)
        {
            NodeCnt++;
        }
        temp=temp->next;
        
    }
    if(NodeCnt==0)
    {
        printf("\nEnter Name is not matched with Available data \n");
        printf("\nPlease Enter Valid Name!!!\n");
    }
    else if(NodeCnt == 1)
    {
        printf("There are Only 1 Owner having name as %s\n",ch);
    }
    else
    {
       printf("There are %d Owners having same name as %s\n",NodeCnt,ch);
    }
    

}
int CountSameBirthDateOwner()
{
    int iCnt=0,Nodecnt=0;

    struct owner *temp;
    temp=Head;

    int Arr[8];
    printf("\nPlease Enter the Birth Date in DDMMYYYY Format\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    while(temp!=NULL)
    {
        iCnt=0;
        for(int i=0;i<8;i++)
        {
            if(temp->birth_date[i]==Arr[i])
            {
                iCnt++;
            }
        }
        if(8==iCnt)
        {
            Nodecnt++;
        }
        temp=temp->next;  
    }
    if(Nodecnt==0)
    {
        printf("\nEntered Birth Date is not matched with Available data \n");
        printf("\nPlease Enter Valid Birth Date!!!\n");
    }
    else if(Nodecnt == 1)
    {
        printf("\nThere is Only 1 Owner having birth date as ");
        for(int i=0;i<8;i++)
        {
            printf("%d",Arr[i]);
            if(i%2!=0 && i<4)
            {
                printf("/");
            }   
        }
    }
    else
    {
       printf("\nThere are %d Owners having same  Birth Date as ",Nodecnt);
       for(int i=0;i<8;i++)
        {
            printf("%d",Arr[i]);
            if(i%2!=0 && i<4)
            {
                printf("/");
            }  
        }
    }
}
void CountAgeOwner()
{
    char ch[90];
    int iYear=0,iYear1=0,iDate=0,iDate1=0,iMonth=0,iMonth1=0;
    int Month[]={31,28,31,30,31,30,31,31,30,31,30,31};


    struct owner *temp;
    temp=Head;
    int iCnt=0;
   // Todays Date Will be stored in array Arr.
    int Arr[8];
    printf("\nPlease enter the name of owner\n");
    scanf("%s",&ch);
    
    while(temp!=NULL)
    {
        if(strcmp(temp->name,ch)==0)
        {
            iCnt++;
            for(int i=0;i<8;i++)
            {
                if(i<2)
                {
                    iDate=temp->birth_date[i] + iDate*10;
                }
                else if(i>3)
                {
                    iYear=temp->birth_date[i] + iYear*10;
                }
                else
                {
                    iMonth=temp->birth_date[i] + iMonth*10;
                }
            }
        }
        
        temp=temp->next;  
    }
    if(iCnt==0)
    {
       printf("\nGiven Owner Name is  not found !!!!!\n");
       printf("Please enter the valid name\n");

        return;
    }
    printf("\nPlease Enter the Todays Date in DDMMYYYY Format\n");
    for(int i=0;i<8;i++)
    {
        scanf("%d",&Arr[i]);
        if(i<2)
        {
            iDate1=Arr[i] + iDate1*10;
        }
        else if(i>3)
        {
            iYear1=Arr[i] + iYear1*10;
        }
        else
        {
            iMonth1=Arr[i] + iMonth1*10;
        } 
    }
    if(iDate > iDate1)
    {
        iDate1=iDate1 + Month[iMonth-1];// present date
        iMonth1=iMonth1-1;  //present month
        

    }
    if(iMonth > iMonth1)
    {
        iYear1=iYear1-1;   // present year
        iMonth1=iMonth1 + 12;
    }
    int final_date= abs(iDate1-iDate);
    int final_month=abs(iMonth1-iMonth);
    int final_year=abs(iYear1-iYear);

   // printf("\nThe Age is : %d Years %d Months and %d Days\n",abs(iYear1-iYear-1),abs(iMonth1-iMonth),abs(iDate1-iDate));
   printf("\nThe Age is : %d Years %d Months and %d Days\n",final_year,final_month,final_date);
    printf("\nThe Age is sucessfully Calculated !!!!!\n");
}
int main()
{
    // This function use to handle start menu.
    
    int choice,iCnt=1,flag=0;
    char ch;
    int Flats,TotalParking;
    do
    {
        printf("\n**********************Welcome to Parking System For Society**********************\n\n");
        printf("1  : Enter the number of flats in society\n");
        printf("2  : Allocate the flat Id,Parking Id,to the owner\n");
        printf("3  : Check flat is available or not\n");
        printf("4  : Calculate Open parking\n");
        printf("5  : search Owner  name by flat number\n");
        printf("6  : search Owner flat number by owner name\n");
        printf("7  : View all owner\n");
        printf("8  : Number of Flat Sold out\n");
        printf("9  : Delete Owner by Flat Number\n");
        printf("10 : Update owner info by Flat Number\n");
        printf("11 : Count the Same name Owner\n");
        printf("12 : Display the all information of owner\n");
        printf("13 : Count same birth date of owner\n");
        printf("14 : Count the age of owner by using birth date\n");
        printf("15 : exit ( please enter choice as 100)\n\n");
        printf("Please Enter the Choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 :
            {       
                    if(flag==0)
                    {
                         printf("----------------------Number of flats in society----------------------\n\n");
                         printf("Please Enter the number of flats\n");
                         scanf("%d",&Flats);
                         flag=1;
                    }
                    else
                    {
                        printf("Sorry,Alredy you enter the Number of Flats!!!");
                       // Printf("If You want to change")
                    }
            
                    
                    break;
            }

            case 2 :
            {
                printf("----------------------Allocate the flat Id,Parking Id,to the owner----------------------\n\n");
                if((iCnt=countTotalFlat())== Flats)
                {
                    printf("Flats is Full !!!\n");    
                }
                else
                {
                    InsertLast();
                }
                break;
            }
            case 3 :
                
                printf("----------------------Check flat is available or not----------------------\n\n");
                if((iCnt=countTotalFlat())== Flats)
                {
                    printf("Flats is Full !!!");   
                }
                else
                {
                    printf("%d flats are remaining\n",Flats-(iCnt=countTotalFlat()));
                    printf("%d flats are Sold  from the total flats\n",iCnt=countsoldFlat());
                    printf("%d flats are Unsold  from the total flats\n",iCnt=countUnsoldFlat());

                }

                break;

            case 4 :

                printf("----------------------Calculate Open Parking----------------------\n\n");
                printf("Please enter the Total Parking Slots\n");
                scanf("%d",&TotalParking);

                if(Flats==TotalParking)
                {
                    printf("There is No Open Parking Slots\n");
                }
                else
                {
                    printf("The Open Parking Slots are : %d\n",TotalParking-Flats);
                }
                break;

            case 5 :

              printf("----------------------search Owner  name by flat Id----------------------\n\n");
              displayOwnerByid();
              break;

            case 6 :
                
                printf("----------------------search flat Id by owner name----------------------\n");
                displayFlatIdByName();
                break;

            case 7 :
                 
                printf("----------------------View all owner----------------------\n");
                displayAllOwner();
                break;

            case 8 :

               printf("----------------------Number of Flat Sold out----------------------\n");
               int iRet=countTotalFlat();
               printf("Number of flats sold out is : %d\n",iRet);
               break;
                    
            case 9 :

                printf("----------------------Delete Owner by Flat number----------------------\n");
                DeleteAtPos();
                break;
            case 10 :
                printf("----------------------Update owner info by Flat Number----------------------\n");
                UpdateOwnerinfoByFlatid();
                break;

            case 11 :

                printf("----------------------Count the Same name Owner----------------------\n");
                CountSameNameOwner();
                break;

            case 12 : 

                printf("----------------------Display the all information of owner----------------------\n");
                display();
                break;

            case 13 :
                
                printf("----------------------Count same birth date of owner----------------------\n");
                CountSameBirthDateOwner();
                break;

            case 14 :

                printf("----------------------Count the age of owner by using birth date----------------------\n");
                CountAgeOwner();
                break;

            default :
              printf("Wrong Choice\n");

        }
       

    }while(choice!=100);

    printf("\n\n!!!!Special Thank For Using Our Application!!!!\n\n");

    return 0;
    
}