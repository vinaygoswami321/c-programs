#include<stdio.h>

int main()
{   int a;
    printf("\"Welcome to the menu driven program\"");
    while(a!=4)
    {
        int num,sum=1,i=2;
        printf("\nEnter the number for respective optioqn. \n 1.Factorial of a number. \n 2.Prime or not. \n 3.Even  or odd. \n 4.Exit.\n  Enter your option number =>");
        scanf("%d",&a);
        switch(a)
        {
        case 1 :
            printf("\n \"Factorial of a number\"");
            printf("\n Enter a number =>");
            scanf("%d",&num);
            if(num>0)
            {   for(int j=1; j<=num; ++j)
                {   sum=sum*j;
                }
            }
            else
                for(int k=num; k<0; ++k)
                {   sum = sum*k;
                }
            printf("\n Factorial of the number =>%d.",sum);
            break;
        case 2 :
            printf("\n\"Prime or not \"");
            printf("\n Enter a number =>");
            scanf("%d",&num);

            while(i<=num-1)
            {
                if(num%i==0)
                {
                    printf("\n%d is not a prime number.",num);
                    break;
                }
                ++i;
            }
            if(i==num)
                printf("\n%d is a prime number.",num);
            break;
        case 3 :
            printf("\"Even or odd\"");
            printf("\nEnter a number =>");
            scanf("%d",&num);
            if(num%2==0)
                printf("\n%d is a even number.",num);
            else printf("\n%d is an odd number.",num);
            break;
        case 4 :
            printf("Thanks for using the program %c",0);
            break;
        default :
            printf("Enter a valid option.");
        }

    }
}