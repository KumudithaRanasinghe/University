#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* //1
    int num1,num2;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    if(num1<num2)
    {
        printf("\n%d is highest\n",num2);
    }
    else
    {
        printf("%d is highest\n",num1);
    }

    //2
    int num1,num2,num3;

    printf("Enter three numbers :");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("/n%d is largest",num1);
    }
    else if(num2>num1 && num2>num3)
    {
        printf("%d is largest\n",num2);
    }
    else
    {
        printf("%d is largest\n",num3);
    }
    if(num1<num2 && num1<num3)
    {
        printf("%d is smallest\n",num1);
    }
    else if(num2<num1 && num2<num3)
    {
        printf("%d is smallest\n",num2);
    }
    else
    {
        printf("%d is smallest\n",num3);
    }

    //3
    char name[30];
    float bs,inc,ns;

    printf("Enter employee name :");
    scanf("%s",&name);
    printf("\nEnter basic salary :");
    scanf("%f",&bs);

    if(bs<5000)
    {
        inc = bs*0.05;
    }
    else if(5000<=bs && bs<10000)
    {
        inc = bs*0.1;
    }
    else
    {
        inc = bs*0.15;
    }
    ns = bs+inc;
    printf("\n%s's New salary is :%.2f\n",name,ns);

    //4
    float r,d;
    double c;

    printf("enter radius of the circle :");
    scanf("%f",&r);

    printf("The Diameter is :%.2f\n",r*2);
    c=3.14159;
    printf("The Circumference is :%f\n",2*c*r);
    printf("The area value is :%f\n",c*r*r);

    //5
    int num1,num2;

    printf("Enter first numbers :");
    scanf("%d",&num1);
    printf("\nEnter second numbers :");
    scanf("%d",&num2);

    if(num1%num2==0)
    {
        printf("%d is the multiple of the %d\n",num1,num2);
    }
    else
    {
       printf("%d is the not multiple of the %d\n",num1,num2);
    }

    *///6

    char input;
    printf("Enter a character :");
    scanf("%c",&input);
    printf("The integer equivalent of %c is : %d\n",input,input);

    /*//7
    char city;
    float syr,bs,gs,sales;

    printf("Enter the basic salary :");
    scanf("%f",&bs);
    printf("Enter the number of service years :");
    scanf("%f",&syr);
    printf("Enter C if working city is Colombo :");
    scanf("%s",&city);
    printf("Enter monthly sales :");
    scanf("%f",&sales);

    if(syr>5)
    {
        gs = bs + bs*0.1;
    }
    else
    {
        gs = bs;
    }
    switch(city)
    {
        case 'C':
        gs = bs + 2500;
        break;
        default:
        gs = gs;
    }
    if(sales<25000)
    {
        gs = gs + sales*0.1;
    }
    else if(25000<sales && sales<50000)
    {
        gs = gs + sales*0.12;
    }
    else
    {
        gs = gs + sales*0.15;
    }

    printf("\nGross monthly remuneration of a salesman :%.2f",gs);*/-

    return 0;
}
