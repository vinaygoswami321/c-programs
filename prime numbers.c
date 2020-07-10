#include<stdio.h>

int main()
{  printf("All prime numbers between 1 to 300 \n");
   for(int i=2;i<300;++i)
    { int prime =0;
      for(int j=2;j<=i/2;++j)
      {  
          if(i%j==0)
          { prime = 1;
           break;}
     else continue;
    
    }
    
    if(prime==0)
      printf("%d\n",i);
    
    
    
    }
  



}