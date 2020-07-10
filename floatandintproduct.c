#include<stdio.h>
float product(float,int);
int main()
{
   float a=0,c;
   int b=0;
   printf("Enter a float number =");
   scanf("%f",&a);
   printf("Enter a integer number =");
   scanf("%d",&b);
   c=product(a,b);
   printf("Product of float and integer =%0.2f",c);

}
float product(float x, int y)
{
  return(x*y);
}