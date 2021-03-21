#include<stdio.h>

void myfunction()
{
    int a,b,num,kam; 
    
    printf("Enter Number:");
    scanf("%d",&num);
    printf("Enter 1 or 0:");
    scanf("%d",&kam);
    if (kam<=1)
    {
    if(kam==0)
    {
        for (a=0;a<num;a++)
        {
            
            for (b=kam;b<=a;b++)
            {
                printf("*");
            
            }
            
            printf("\n");
            
        }
    }
    else if(kam==1)
    {
        for (a=num;a>=1;a--)
        {
            
            for (b=kam;b<=a;b++)
            {
                printf("*");
            
            }
            
            printf("\n");
            
        }
    }
    
    }

    
}

void main()
{
    myfunction();
}

