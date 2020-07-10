#include<stdio.h>

int main()
{ int k =1,count=1;
   for(int i=1;i<=5;++i)
   { for(int space=10;space>=count;--space)
       { printf(" ");}
      ++count;
     for(int j=1;j<=i;++j)
    { printf(" %d",i);
    }
  printf("\n");

}
}