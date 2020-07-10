#include<stdio.h>

int main()
{ int a;
  printf("Enter the numbers of floor you want in the pyramid->");
  scanf("%d",&a);
  for(int i =1;i<=a;++i)
     {   for(int s=i;s<=a-1;++s)
            { printf(" ");}
         for(int j=1;j<=i;++j)
           { printf("%d",j); }
       for(int k=i-1;k>=1;--k)
        { printf("%d",k);}
        
     printf("\n");
    } 
}