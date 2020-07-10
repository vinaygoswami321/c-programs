#include<stdio.h>
int fact(int);
void main()
{
  int a;
  printf("Enter a integer to get its factorial =");
  scanf("%d",&a);
  printf("\Factorial =%d\n",fact(a));
  
}
int fact(int x)
{
   int f=0;
   if(x==1)
      return(1);
    else 
      f=x*fact(x-1);
   
}