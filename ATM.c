#include<stdio.h>

int main()
{   int pin,b=1,pin1,pin2;
    printf("\"Welcome to Goswami Bank\"");
    while(b)
    {   printf("\nSet your ATM pin ->");
        scanf("%d",&pin1);
        if(pin1>=1000 && pin1<=9999)
        {   printf("Your ATM pin has been set successfully\n ");
            b=0;
        }
        else
            printf("Enter a valid 4 digit pin greater than 1000");
    }
    char yes ='y';
    while(yes=='y')
    {
        printf("\nEnter your pin ->");
        scanf("%d",&pin);
        if(pin==pin1)
        {   int a =0,balance=9999999,with =0;
            int d=1,c=1,e=1,f=1;
            printf("\nChoose the options you want \n");
            printf("(1).Balance enquiry\n(2).Withdrawal\n(3).Mini statement\n(4).Change pin\n");
            printf("Enter the number of option you want ->");
            scanf("%d",&a);
            switch(a)
            {
            case 1 :
                printf("Your balance is =%d \n ",balance);
                break;
            case 2 :
                printf("Enter the amount to be withdrawn ->");
                scanf("%d",&with);
                printf("\nPlease collect the cash");
                printf("\nMoney left in your account =%d",balance-with);
                break;
            case 3 :
                printf("\n Please collect the mini statement");
                break;
            case 4 :
                while(f)
                {   printf("\nEnter the old pin ->");
                    scanf("%d",&d);
                    if(d==pin1)
                    {
                        printf("\nEnter the new pin =");
                        scanf("%d",&c);

                        if(c>=1000 && c<=9999)
                        {   printf("\nRe-enter the new pin = ");
                            scanf("%d",&e);
                            if(e==c)
                            {   printf("\New pin has been successfully set");
                                pin1=c;
                                f=0;
                            }
                            else
                                printf("\nTry again incorrect pin");
                        }
                        else printf("\nInvalid pin\nEnter a 4 digit pin");

                    } else
                    {   printf("\nTry again your pin is incorrect");
                        continue;
                    }
                }
                break;
            default :
                printf("\nEnter a valid option");
            }


        }

        else {
            printf("\"!Wrong pin Try again \"\n");
        }
        printf("\n Do you want to continue using services \n Enter 'y' for Yes or 'n' for no -> ");
        scanf("%s",&yes);
        if(yes=='n')
        {   printf("\n THANK YOU FOR USING OUR SERVICES");
            break;
        }
        else
            continue;
    }


}