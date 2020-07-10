#include<stdio.h>
int sumdigits(int);
void main()
{
  int num=0,s=0;
  printf("Enter a 5 digit integer =");
  scanf("%d",&num);
  s=sumdigits(num);
  printf("\nThe sum of the digits =%d",s);

}
int sumdigits(int a)
{ 
  if(a==0)
   return 0;
  return(a%10+sumdigits(a/10));
}

