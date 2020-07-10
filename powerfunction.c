#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("Enter a number1 =");
    scanf("%d",&a);
    printf("\nEnter the number2 to which number1 be raised = ");
    scanf("%d",&b);
    printf("\nThe number1 raised to number2 =%d",power(a,b));
}
int power(int i,int j)
{ int sum =1;
  for(int k=1;k<=j;k++)
   {
      sum = sum*i;
   }
   return(sum);

}