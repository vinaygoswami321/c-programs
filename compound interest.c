#include<stdio.h>
#include<math.h>
int main()
{ float p,q,r,n,a;
  printf("\"Welcome to compound interest calculator\"");
   for(int i=1;i<=10;i++)
    {
       printf("\n Enter the principle amount\nRate\nnumber of year\ntimes compounded\n");
       scanf("%f%f%f%f",&p,&r,&n,&q);
        a=p*pow((1+r/q),n*q);
        printf("The compund amount =%f",a);
      
    
    }
}