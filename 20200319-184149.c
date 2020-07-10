#include<stdio.h>

int main()
{   float a,b,c,d,e,agg,per;
     printf("Enter the marks for 5 subjects accordingly \n 1.Eglish \n 2.Hindi \n 3.Science \n 4.SST \n 5.Maths ");
     scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    if(a<=100 && b<=100 && c<=100 && d<=100 && e<=100)
    {  agg = a + b + c + d + e;
        per = agg/500*100;
        printf("Aggregate marks =%.2f \n Percentage marks =%.2f",agg,per);

    }
    else  printf("please enter correct marks");
    return 0;
}