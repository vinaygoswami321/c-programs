#include<stdio.h>

int main()
{
   int s=1;
   int a,b;
    printf("Program to print all combinations between given range of number\n");
   printf("Enter the first numberof the range -> ");
   scanf("%d",&a);
   printf("Enter the last number of the range ->");
   scanf("%d",&b);
   printf("All the possible combinations will be \n");
   for(int i = a;i<=b;++i)
{ int s1=100;
    s1=s1*i;
        for(int j=a;j<=b;++j)
       {  int s2=10;
         s2 = s2*j;
        for(int k =a;k<=b;++k)
          { int sum=0,s3=1;
               s3=s3*k;
              sum =sum+s1+s2+s3;
             printf("%d. %d\n",s,sum);
             ++s;
    }
   }


} printf("Total number of possible combinations will be = %d",s);
}