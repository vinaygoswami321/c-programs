#include<stdio.h>

int main()
{
   char a;
  printf("Enter the character \n");
  scanf("%c",&a);
 if(a>=65 && a<=90)
printf("Its a capital letter");
else if(a>=97 && a<=122)
 printf("Its a small letter");
else if(a>=48 && a<=57)
printf("Its a digit");
else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127))
    printf("Its a special character");
else printf("Enter a valid character");

}