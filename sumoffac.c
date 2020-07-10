#include<stdio.h>

int main()
{
   float sum =1;
  for(int i =2;i<=7;i++)
{ float fac =1;
   for(int j=1;j<=i;j++)
  { fac=fac*j;


}
     sum = sum + i/fac;


} printf("%f",sum);
}