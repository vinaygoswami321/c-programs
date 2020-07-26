#include<stdio.h>
#include<conio.h>
void disp(int *,int,int);
void show(int (*)[2],int,int);
void pres(int [][2],int,int);
void main()
{ printf("Press a button\n");
     getch();
    int stud[4][2]={{1,10},{2,20},{3,30},{4,40}};
   disp(stud,4,2);
   show(stud,4,2);
   pres(stud,4,2);
   getch();
 }
 void disp(int *p,int row,int col)
 {
     int i,j;
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
            printf("%d ",*(p+i*col+j));
          printf("\n");
     }
     printf("\n");
 }
 void show(int (*p)[2],int row ,int col)
 {
     int i,j,*t;
     for(i=0;i<row;i++)
     {
         t=(p+i);
         for(j=0;j<col;j++)
            printf("%d ",*(t+j));
         printf("\n");
     } printf("\n");
 }
 void pres(int p[][2],int row,int col)
 {
     int i,j;
     for(i=0;i<row;i++)
     {
         for(j=0;j<col;j++)
            printf("%d ",p[i][j]);
         printf("\n");
     }
     printf("\n");
 }
