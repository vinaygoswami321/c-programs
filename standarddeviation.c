#include<stdio.h>
#include<math.h>
float std(int ,int ,int ,int ,int);
int main()
{
   int a,b,c,d,e,f=0;
   float g=0;
   printf("Enter five integers =\n");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   std(a,b,c,d,e);
   

}
float std(int x,int y,int z,int r,int t )
{ 
  int sum =0;
  float avg =0;
  float std =0;
  sum = x+y+z+r+t;
  printf("Sum of the five integers =%d",sum);
  avg = sum/5.0;
  printf("\nAverage of the five integers =%0.3f",avg);
   std = std+sqrt((pow((x-avg),2.0)+pow((y-avg),2.0)+pow((z-avg),2.0)+pow((r-avg),2.0)+pow((t-avg),2.0))/5.0);
    printf("\nStandard deviation for the five integers =%f",std);
}