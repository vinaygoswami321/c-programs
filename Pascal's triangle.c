#include<stdio.h>

int main()
{
   int ncr=1,n;
    scanf("%d",&n);
   for(int i=0;i<=n;++i)
     {
         for(int space =i;space<=n;++space)
           { printf(" ");}
        for(int r=0;r<=i;++r)
           {  if(i==0 || r==0)
              { ncr =1;
                printf("%d ",ncr);
            }
              else 
            {
              ncr = ncr*(i-r+1)/r;
               printf("%d ",ncr);
            }
           } printf("\n");
    }
   
}