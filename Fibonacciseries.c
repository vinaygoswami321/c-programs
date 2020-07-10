#include<stdio.h>
int Fibonacci(int,int ,int *,int * ,int *);
int main()
{
  int i=1,s;
   printf("Enter how many nunber of fibonacci series you want =");
   scanf("%d",&s);
     int a,b,sum;
     a=0;b=1;sum=0;
    Fibonacci(i,s,&a,&b,&sum);
}
int Fibonacci(int n,int t,int *x,int *y,int *z)
{ while(n<=t)
     {
       printf("%d ",*x);
        *z=*x+*y;
        *x=*y;
        *y=*z;
        n++;
     }
} 





