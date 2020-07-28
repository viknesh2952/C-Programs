#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,person=0;
    int j;
   // int withdrawal,deposit;
    int accno[10],mblno[10][10],amnt[10][10];
   // long value;
    char name[10][10],dob[10][10];
    do
    {
        printf("\n1.Create acc,2.Withdrawl,3.Deposite,4.Balance enquary,0.exit");
        printf("\nEnter ur choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n\t\t\t\t\tCreate an account");
            printf("\nEnter the Name:");
            scanf("%s",&name[person]);
            printf("\nEnter the Date of birth:");
            scanf("%s",&dob[person]);
            printf("\nEnter the mobile number:");
            scanf("%d",&mblno[person]);
            printf("\nEnter the Amount for first deposite:");
            scanf("%d",&amnt[person]);
            printf("\nEnter the account no:");
            scanf("%d",&accno[person]);
            printf("\n\t\t\tUr Account is created successfuly");
            person++;
        break;
        /*
        case 2:
            printf("\n\t\t\t\t\tWithdrawal");
            printf("\nEnter the Account no:");
            scanf("%ld",&value);
            for(i=0;i<person;i++)
            {
                if(value==accno[i])
                {
                    printf("\nUr balance:%ld",amnt[i]);
                    printf("\nEnter the withdrawal amount:");
                    scanf("%ld",&withdrawal);
                    if(withdrawal>amnt[i])
                    {
                        printf("\nAmount is too high!!");
                        goto amntwrng;
                    }
                    else
                    {
                     amnt[i]=amnt[i]-withdrawal;
                     printf("Amount withdrawal succesfully :)");
                     break;
                    }                   
                }
                else
                {
                    printf("\nPleas check ur Account no");
                    goto accwrng;
                }
            }
        break;
        case 3:
            printf("\n\t\t\t\t\tDeposite");
            accwrng2:
            printf("\nENter the Account no:");
            scanf("%ld",&value);
            for(i=1;i<=person;i++)
            {
                if(value==accno[i])
                {
                    amntwrng2:
                    printf("\nEnter the deposot amount:");
                    scanf("%ld",&deposite);
                    if(deposite>49000)
                    {
                        printf("\nAmount is too high!!");
                        goto amntwrng2;
                    }
                    else
                    {
                     amnt[i]=amnt[i]+deposite;
                     printf("Amount deposited succesfully :)");
                     break;
                    }                   
                }
                
                else
                {
                    printf("\nPleas check ur Account no");
                    goto accwrng2;
                }  
            }      
        break;
        case 4:
            printf("\n\t\t\t\t\tBalance Enquary");
            accwrng3:
            printf("\nENter the Account no:");
            scanf("%ld",&value);
            for(i=1;i<=person;i++)
            {
                if(value==accno[i])
                {
                    printf("\nUr Available balance:%ld",amnt[i]);
                    break;
                }
            } 
            else
            {
                printf("\nPleas check ur Account no");
                goto accwrng3;
            }   
        break;*/
        case 0:
            printf("\nThank u for using our service :)");
        break;      
        default:
            printf("\nPleas enter correct choice");
        break;
        }
    } while (choice!=0);
    printf("hi");
    printf("%d",accno[0]);
    printf("%s",name[0]);
    
    /*for(j=0;j<=5;j++)
           printf("%s%s%d%d%d",name[0][j],dob[0][j],mblno[0][j],amnt[0][j],accno[0][j]);
      */  
    getch();   
}