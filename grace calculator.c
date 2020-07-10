#include<stdio.h>

int main()
{   int i = 1;
    while(i)
     {   int sub=0,class=0;
          char a ='y';
        printf("\nEnter the class obtained by student\n1.First.\n2.Second.\n3.Third.\nEnter the class =>");
        scanf("%d",&class);
        printf("\nEnter the number of subjects student failed in =>");
        scanf("%d",&sub);
        switch(class)
        {
        case 1 :
            if(sub<=3)
                printf("\nTotal grace =%d",sub*5);
            else printf("\nStudent doesn't get grace");
            break;
        case 2 :
            if(sub<=2)
                printf("\nTotal grace =%d",sub*4);
            else printf("\nStudents doesn't get grace");
            break;
        case 3 :
            if(sub<=1)
                printf("\nTotal grace =%d",sub*5);
            else printf("\nStudent doesn't get grace");
            break;
        default :
            printf("\nEnter valid class");

        } printf("\n\"Do you want to continue\"\nEnter 'y' for yes and 'n' for no =>");
          scanf("%s",&a);
          if(a=='n')
           { i=0; }
    }
}