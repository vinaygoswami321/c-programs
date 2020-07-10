#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0,x;
    printf("Enter a number =");
    scanf("%f",&x);
    for(int i=1; i<=7; ++i)
    {
        if(i==1)
        {
            sum = sum + (x-1)/x;
        }
        else
        {
            sum = sum + 0.5*pow((x-1)/x,i);
        }

    }
         printf("\nSum of the series for 7 terms =%.8f",sum);

}