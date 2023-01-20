#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4 a
    if(taxCode=='T')
    {
        price = price +(price*taxRate);
    }

    //b
    double x,y,sum;
    if(opCode=1)
    {
        printf("Enter the two numbers :");
        scanf("%if %if",&x,&y);
        sum=x+y;
        printf("sum is :%if",sum);
    }

    //c
    if(currentNumber%2==1)
    {
        currentNumber = (currentNumber*3)+1;
    }
    else
    {
        currentNumber = currentNumber*0.5;
    }

    //d
    int yr;

    printf("Enter a year :");
    scanf("%d",&yr);

    if(yr%4==0)
    {
        if(yr%100==0)
        {
            if(yr%400==0)
            {
                printf("%d is a leap year",yr);
            }
            else
            {
                printf("%d is not a leap year",yr);
            }
        }
        else
        {
            printf("%d is a leap year",yr);
        }
    }
    else
    {
        printf("%d is not a leap year",yr);
    }

    //e
    double cost;

    if(distance>0 && distance<100)
    {
        cost=5.00;
    }
    else if(distance>100 && distance<500)
    {
        cost=8.00;
    }
    else if(distance>500 && distance<1000)
    {
        cost=10.00;
    }
    else
    {
        cost=12.00;
    }

    return 0;
}
