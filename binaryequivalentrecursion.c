#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<conio.h>
int recbinary(int , int , int ,int);
int main()
{
    int i=0,num,binary=0,bit=0,result=0;
    printf("Enter a positive integer =");
    scanf("%d",&num);
    result=recbinary(i,num,bit,binary);
    printf("%d",result);
    getch();
}
int recbinary(int i, int num,int bit ,int binary)
{
    if(num>0)
    {
        bit = num%2;
        num=num/2;
        binary=binary+(bit*pow(10,i));
        i++;
        recbinary(i,num,bit,binary);
    }
    else
        return(binary);
}
