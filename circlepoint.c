#include<stdio.h>

int main()
{
    int a,b,x,y;
    float r,t;
     printf("Enter the coordinates of center \n And radius \n");
     scanf("%d %d %f",&a,&b,&r);
  printf("Enter the coordinates of point \n");
    scanf("%d %d",&x,&y);
    t = sqrt(pow(x-a,2)+pow(y-b,2));
   if(r==t)
      printf("Point lie on the circle");
    else if(r>t)
          printf("Point lie inside the circle");
        else printf("Point lie outside the circle");
    
    
   
}