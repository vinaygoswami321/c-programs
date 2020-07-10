#include<stdio.h>

int main()
{
  int num,p=0,n=0,z=0;
   char a;
   while(1)
  { 
    printf("Enter the number \n");
    scanf("%d",&num);
     if(num>0)
     ++p;
    else if(num<0)
     ++n;
    else 
    ++z;
    printf("Do you want to enter another number \nEnter y for yes or n for no \n ");
    scanf("%s",&a);
     if(a=='y')
    continue;
   else 
    break;
}
printf("Number of positive numbers =%d\n",p);
printf("Number of negative numbers =%d\n",n);
printf("Number of zeroes=%d\n",z);


}