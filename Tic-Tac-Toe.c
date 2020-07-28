#include<stdio.h>
#include<conio.h>
#include<string.h>
char check(char[],char);
void printarray(char a[]);
void main(){
    char p1[10],p2[10],a[9],role,rolename[10],value;
    int i,x_count=0,o_count=0,pos,flag=0;
    printf("\n\t\t----------Tic-Tac-Toe----------");
    printf("\nEnter name for Player1:\t");
    scanf("%s",&p1);
    printf("\nEnter name for Player2:\t");
    scanf("%s",&p2);
    printf("\n\n%s:X",p1);
    printf("\n%s:O",p2);
    for(i=0;i<9;i++)
        a[i]='_';
    printf("\n\nGame Starts!!!");
    printarray(a);
    for(i=0;i<9;i++)
    {
        if(i%2==0)
        {
            role='X';
            strcpy(rolename,p1);
            x_count++;
        }
        else
        {
            role='O';
            strcpy(rolename,p2);
            o_count++;
        }
            printf("\n%s Enter your position:",rolename);
            scanf("%d",&pos);
            if(a[pos-1]=='_')
            {
                a[pos-1]=role;
                printarray(a);
            }
            else
            {
                 printf("\n Already Marked!!Try another");
                 i=i-1;
                 continue;   
            }   
            if(x_count>2 || o_count>2)
            {
                value=check(a,role);
                if(value=='y')
                {
                    printf("\n%s Wons the match",rolename);
                    flag=1;
                    break;
                }
            }
           
    }
    if(flag==0)
        printf("\nMatch Draw");
    
    getch();
}
void printarray(char a[]){
    int i;
    printf("\n\n");
    for(i=0;i<9;i++){
        printf("\t\t%c",a[i]);
        if(i==2 || i==5){
            printf("\n\n");
        }
    }
}
char check(char a[],char role)
{
 int line=0,i;
 for(i=1;i<=3;i++)
 {
     if(a[line]==role && a[line+1]==role && a[line+2]==role)
     {
         return 'y';
     }
     line=line+3;
 }   
 line=0;
 for(i=1;i<=3;i++)
 {
     if(a[line]==role && a[line+3]==role && a[line+6]==role)
     {
         return 'y';
     }
     line++;
 }
 line=0;
 if(a[line]==role && a[line+4]==role && a[line+8]==role)
        return 'y';
 line=line+2;
 if(a[line]==role && a[line+2]==role && a[line+4]==role)
        return 'y';

 return 'n';
}