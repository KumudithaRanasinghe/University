#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    float num1,num2,result=0;
    char op;

    printf("Enter two numbers :");
    scanf("%f %f",&num1,&num2);
    printf("\n 1. +\n 2. -\n 3. *\n 4. /\nPlease enter your choice :");
    scanf("%c",&op);

    switch(op)
    {
        case '+':
            result=num1+num2;

            break;
        case '-':
            result=num1-num2;

            break;
        case '*':
            result=num1*num2;

            break;
        case '/':
            result=num1/num2;

            break;
        default:
            printf("Error\n");


    }
    printf("Result : %.2f %c %.2f = %.2f\n",num1,op,num2,result);

    //While loop
    //1
    int limit=1,num,odd=0,even=0;

    while(limit<=10)
    {
        printf("Enter number %d:",limit);
        scanf("%d",&num);

        if(num%2==1)
        {
            odd++;
        }
        if(num%2==0)
        {
            even++;
        }

        limit++;
    }
    printf("\nOdd numbers :%d\n",odd);
    printf("\neven numbers :%d\n",even);

    //2
    int limit=1,num,odd=0,even=0;

    while(num!=-99)
    {
        printf("Enter number %d:",limit);
        scanf("%d",&num);
        if(num!=-99)
        {
           if(num%2==1)
        {
            odd++;
        }
        if(num%2==0)
        {
            even++;
        }

        limit++;
        }


    }
    printf("\nOdd numbers :%d\n",odd);
    printf("\neven numbers :%d\n",even);


   // do while loop
    //1
    int limit=1,num,odd=0,even=0;

    do
    {
        printf("Enter number %d :",limit);
        scanf("%d",&num);


        if(num%2==1)
        {
            odd++;
        }
        if(num%2==0)
        {
            even++;

        }
        limit++;

    }
    while(limit<=10);

    printf("\nOdd numbers :%d\n",odd);
    printf("\neven numbers :%d\n",even);

    //2
    int limit=1,num,odd=0,even=0;

    do
    {
        printf("Enter number %d :",limit);
        scanf("%d",&num);
        if(num!=-99)
        {
             if(num%2==1)
        {
            odd++;
        }
        if(num%2==0)
        {
            even++;

        }
        limit++;
        }

    }
    while(num!=-99);

    printf("\nOdd numbers :%d\n",odd);
    printf("\neven numbers :%d\n",even);


    //for loop
    //1
    int i=1,num=0,sum=0;
    float avg=0;

    for(i;i<=10;++i)
    {
        printf("Enter %d value: ",i);
        scanf("%d",&num);
        sum+=num;
    }
    avg=sum/10;
    printf("\nAverage: %f",avg);


    //2
    int n=5;
    for(int i=1 ; i<=n; i++)
    {
    for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
