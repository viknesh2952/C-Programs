#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,i,j,slot,area[10][10],vehicle,search,flag;
    char option;
    slot=3;
    for(i=0;i<slot;i++)
    {
        for(j=0;j<slot;j++)
        {
            area[i][j]=0;
        }
    }
    do
    {        
        printf("\n1.Car checkin,2.Car checkout,3.View,4.Searching car,0.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        flag=0;
        switch(choice)
        {
            case 1:
                printf("\n\t\t\t\t\tCheck in");
                printf("\nEnter your vehicle no:");
                scanf("%d",&vehicle);
                for(i=0;i<slot;i++)
                {
                    for(j=0;j<slot;j++)
                    {
                        if(area[i][j]==0)
                        {
                            area[i][j]=vehicle;
                            printf("\n\t\t\t\t\tvehicle is parked succesfuly");
                            flag=1;
                            goto success;
                        }
                    }
                }
                success:
                if(flag==0)
                {
                    printf("\nQueue is full!!!");
                }
            break;
            case 2:
                printf("\n\t\t\t\t\tCheck out");
                printf("\nEnter the vehicle no:");
                scanf("%d",&vehicle);
                for(i=0;i<slot;i++)
                {
                    for(j=0;j<slot;j++)
                    {
                        if(area[i][j]==vehicle)
                        {
                            area[i][j]=0;
                            printf("\n\t\t\t\t\tvehicle is taken succesfuly");
                            goto success2;
                        }
                    }
                }
                success2:
                    break;
            case 3:
                printf("\n\t\t\t\t\tView");
                for(i=0;i<slot;i++)
                {
                    printf("\n\n");
                    for(j=0;j<slot;j++)
                    {
                       printf("\t\t%d",area[i][j]);
                    }
                    
                }
            break;    
            case 4:
                search=0;
                printf("\n\t\t\t\t\tSearch");
                ser:
                printf("\nEnter the vehicle no:");
                scanf("%d",&vehicle);
                for(i=0;i<slot;i++)
                {
                    for(j=0;j<slot;j++)
                    {
                        if(area[i][j]==vehicle)
                        {
                            printf("\n%d car is parked in position %d",vehicle,(i*3)+j+1);
                            search=1;
                            goto success3;
                        }
                    }
                }
                if(search==0)
                {
                    printf("Incorrect details");
                    printf("Do u want to continiue(y/n):");
                    scanf("%c",&option);
                    if(option=='y')
                    {
                        goto ser;
                    }
                }
                success3:
            break;
            case 0:
                printf("\nExit!!");
            break;
            default:
                printf("\nEnter the correct choice");
            break;
        }
    } while (choice!=0);
    
}