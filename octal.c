#include <stdio.h>
int main()
 {
  int dec=0, oct=0, d=0, m=1;
  printf("Enter the decimal number you wanna convert.");
  scanf("%d", &dec);
  while(dec>0)
   {
    oct= (dec%2)*m + oct;
    dec=dec/2;
    m=m*10;
   }
  oct= dec*m+oct;
  printf("The octal equivalent is %d", oct);
  return 0;
 }