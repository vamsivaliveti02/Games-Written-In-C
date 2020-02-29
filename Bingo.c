#include<stdio.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  z:{int i,j,a[10][10]={0},choice,y,o=0;
  int A=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,n=0,k=0,l=0,p=0,q=0,z=0;
  gotoxy(9,8);
  printf("👉BINGO FOREVER👈");
  gotoxy(10,10);
  printf("0.✌START✌");
  gotoxy(10,12);
  printf("1.👨HELP👨");
  gotoxy(10,14);
  printf("2.😡EXIT😡");
  gotoxy(30,25);
  scanf("%d",&y);
  clrscr();
switch(y)
{
case 0:{
 for(i=0;i<=4;i++)
   {
      for(j=0;j<=4;j++)
      {
             v: gotoxy(9,4);
             printf("👉BINGO FOREVER👈");
             gotoxy(6,5);
             printf("--------------------------\n");
             gotoxy(6,6); 
             printf("| %2d | %2d | %2d | %2d | %2d |\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
             gotoxy(6,7);
             printf("--------------------------\n");
             gotoxy(6,8);
             printf("| %2d | %2d | %2d | %2d | %2d |\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
             gotoxy(6,9);
             printf("--------------------------\n");
             gotoxy(6,10);
             printf("| %2d | %2d | %2d | %2d | %2d |\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
             gotoxy(6,11);
             printf("--------------------------\n");
             gotoxy(6,12);
             printf("| %2d | %2d | %2d | %2d | %2d |\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
             gotoxy(6,13);
             printf("--------------------------\n");
             gotoxy(6,14);
             printf("| %2d | %2d | %2d | %2d | %2d |\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
             gotoxy(6,15);
             printf("--------------------------\n");
             scanf("%d",&a[i][j]);
             clrscr();
            for(o=0;o<=i;o++)
            {
               for(q=0;q<=4;q++)
               {
                   if(a[i][j]==a[o][q]&&(i!=o||j!=q))
                   {
                     a[i][j]=0;
                     goto v;
                   }
               if(a[i][j]>25)
                {
                    a[i][j]=0;
                    goto v;
                }
            }
        
        }
      }
   }
x:{
   gotoxy(10,4);
   printf("👉BINGO FOREVER👈");
   gotoxy(6,5);
   printf("--------------------------\n");
   gotoxy(6,6); 
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
   gotoxy(6,7);
   printf("--------------------------\n");
   gotoxy(6,8);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
   gotoxy(6,9);
   printf("--------------------------\n");
   gotoxy(6,10);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
   gotoxy(6,11);
   printf("--------------------------\n");
   gotoxy(6,12);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
   gotoxy(6,13);
   printf("--------------------------\n");
   gotoxy(6,14);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
   gotoxy(6,15);
   printf("--------------------------\n");
   scanf("%d",&choice);
   for(i=0;i<=4;i++)
   {
      for(j=0;j<=4;j++)
      {
        if(a[i][j]==choice)
        {
            a[i][j]=0;
        }
      }
   }
   gotoxy(10,4);
   printf("👉BINGO FOREVER👈");
   gotoxy(6,5);
   printf("--------------------------\n");
   gotoxy(6,6); 
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[0][0],a[0][1],a[0][2],a[0][3],a[0][4]);
   gotoxy(6,7);
   printf("--------------------------\n");
   gotoxy(6,8);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[1][0],a[1][1],a[1][2],a[1][3],a[1][4]);
   gotoxy(6,9);
   printf("--------------------------\n");
   gotoxy(6,10);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[2][0],a[2][1],a[2][2],a[2][3],a[2][4]);
   gotoxy(6,11);
   printf("--------------------------\n");
   gotoxy(6,12);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[3][0],a[3][1],a[3][2],a[3][3],a[3][4]);
   gotoxy(6,13);
   printf("--------------------------\n");
   gotoxy(6,14);
   printf("| %2d | %2d | %2d | %2d | %2d |\n",a[4][0],a[4][1],a[4][2],a[4][3],a[4][4]);
   gotoxy(6,15);
   printf("--------------------------\n");
   clrscr();
 
   if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[2][0]==a[3][0]&&a[3][0]==a[4][0])
A=1;
if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[2][1]==a[3][1]&&a[3][1]==a[4][1])
b=1;
if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[2][2]==a[3][2]&&a[3][2]==a[4][2])
c=1;
if(a[0][3]==a[1][3]&&a[1][3]==a[2][3]&&a[2][3]==a[3][3]&&a[3][3]==a[4][3])
d=1;
if(a[0][4]==a[1][4]&&a[1][4]==a[2][4]&&a[2][4]==a[3][4]&&a[3][4]==a[4][4])
e=1;
if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]==a[0][3]&&a[0][3]==a[0][4])
f=1;
if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]==a[1][3]&&a[1][3]==a[1][4])
g=1;
if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]==a[2][3]&&a[2][3]==a[2][4])
h=1;
if(a[3][0]==a[3][1]&&a[3][1]==a[3][2]&&a[3][2]==a[3][3]&&a[3][3]==a[3][4])
m=1;
if(a[4][0]==a[4][1]&&a[4][1]==a[4][2]&&a[4][2]==a[4][3]&&a[4][3]==a[4][4])
n=1;
if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==a[3][3]&&a[3][3]==a[4][4])
k=1;
if(a[4][0]==a[3][1]&&a[3][1]==a[2][2]&&a[2][2]==a[1][3]&&a[1][3]==a[0][4])
l=1;
p=A+b+c+d+e+f+g+h+m+n+k+l;
clrscr();
if(p>=5)
{printf("BINGO");
z=1;
}
clrscr();
switch(p)
{
    case 0:{
                clrscr();
                goto x;
            }
    case 1:{
           gotoxy(15,20);
           printf("B");
           goto x;
           }break;
    case 2:{
           
           gotoxy(15,20);
           printf("BI");
           goto x;
           }break;
    case 3:{
           gotoxy(15,20);
           printf("BIN");
           goto x;
           }break;
    case 4:{
           gotoxy(15,20);
           printf("BING");
           goto x;
           }break;
    case 5:{
           gotoxy(15,20);
           printf("BINGO");
           goto x;
           }break;    
   default:break;
     }
   }
 }break;
case 1:{    clrscr();
            gotoxy(13,1);
            printf("🤔HELP🤔\n\n");
            gotoxy(15,15);
            printf("press 0 for Back");
            scanf("%d",&o);
            if(o==0)
            {
            clrscr();
            goto z;
            }
       }break;
case 2:{
            clrscr();
            gotoxy(11,13);
            printf("😀THANK YOU😀\n\n\n\n\n\n");
       }break;
default:{
            gotoxy(10,15);
            printf("\n\nINVALID OPTION!!\nRE-ENTER");
            goto z;
        }break;
      }
    }
  }
 

vs.c
Displaying vs.c.
