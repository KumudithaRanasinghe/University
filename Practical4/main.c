#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //1
    int limit,num,pt=0,nt=0,zero=0;

    printf("Enter 10 numbers :");

    limit=10;

    while(limit)
    {
        scanf("%d",&num);

        if(num>0)
        {
            pt++;
        }
        else if(num<0)
        {
            nt++;
        }
        else
        {
            zero++;
        }
        limit--;
    }
    printf("\nPositive numbers :%d\n",pt);
    printf("\nNegative numbers :%d\n",nt);
    printf("\nNumber of zero :%d\n",zero);

    //2
    int limit,count=0,num,sum=0,max,min;
    float avg;

    printf("Enter number of students :");
    scanf("%d",&limit);
    printf("Enter %d students marks :",limit);

    while(count<limit)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
        }
        else if(num<min)
        {
           min=num;
        }

        sum=sum+num;

        count++;
    }
    avg=sum/limit;

    printf("Maximum mark :%d\n",max);
    printf("Minimum mark :%d\n",min);
    printf("Average mark :%.2f\n",avg);

    //3
    int i,count=0;
    float pr,sum=0,avg;

    printf("Enter number of items :");
    scanf("%d",&i);

    for(i=0;i<10;i++)
    {
        printf("Enter price of %d items :",i+1);
        scanf("%f",&pr);
        sum=sum+pr;
        if(pr>200)
            count++;
    }
    avg=sum/10;

    printf("\n Average value of an item :%.2f\n",avg);
    printf("Number of items which the price is greater than 200 :%d",count);

    //4
    int empno,count=0;
    float bs;

    while(empno!=-999)
    {
        printf("Enter the employee number :");
        scanf("%d",&empno);
        printf("\nEnter the basic salary :");
        scanf("%f",&bs);

        if(bs>=5000)
            count++;
    }

    printf("The number employees whose basic salary greater than or equal 5000 :%d",count);

    //5
    int empno,count=0,h,totalemp=0;
    float ot;

    while(empno!=-999)
    {
       printf("Enter the employee number :");
       scanf("%d",&empno);
       printf("Enter the hours worked :");
       scanf("%d",&h);

       if(h>40)
       {
          ot=40*150 + (h-40)*200;
       }
       else
       {
           ot=h*150;
       }


       if(ot>4000)
        count++;
       totalemp++;

       printf("Employee %d OT payment :%.2f\n",empno,ot);
    }
    printf("percentage of employees whose Over time payment exceeding the Rs. 4000 :%.2f%%",(count*100/100)/totalemp);


    // part B
    // 1
    int num;
    printf("Enter a Number ");
    scanf(" %d",&num);
    if(num%2==0)
    {
          printf("It is Even a number");
    }
    else
    {
       printf("It is an odd number");
    }

    // switch statement

    int num;

    printf("Enter a number ");
    scanf(" %d",&num);

    switch(num%2)
    {
       case 0:
        printf("It is a even number");
        break;

       default :
        printf("It is an Oded number ");
        break;
    }

    //2
    char operator;
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter operator (+, -, /, *): ");
    scanf(" %c", &operator);

    switch (operator)
     {
         case '+':
         result = num1 + num2;
         printf("\n");
         printf("result is %.2f+%.2f = %.2f", num1,num2,result);
         break;
         case '-':
         result = num1 - num2;
         printf("\n");
         printf("result is %.2f-%.2f = %.2f", num1,num2,result);
         break;
         case '/':
         result = num1 / num2;
         printf("\n");
         printf("result is %.2f/%.2f = %.2f", num1,num2,result);
         break;
         case '*':
         result = num1 * num2;
         printf("\n");
         printf("result is %.2f*%.2f = %.2f", num1,num2,result);
         break;
         default:
         printf("Invalid ");
     }

    //4
    int option;
    double result,radius,pi=3.14159265;
    printf("1. Calculate the circumference \n");
    printf("2. Calculate the area \n");
    printf("3. Calculate the volume \n");
    printf("Enter your choice number: ");
    scanf("%d", &option);

    switch(option)
    {
         case 1:
            printf("Enter radius : ");
            scanf("%lf", &radius);
            result = 2 * pi * radius;
            printf("circumference is %lf\n", result);
         break;
         case 2:
            printf("Enter radius : ");
            scanf("%lf", &radius);
            result = pi * pow(radius, 2);
            printf("area is %lf\n", result);
         break;
         case 3:
            printf("Enter radius : ");
            scanf("%lf", &radius);
            result = (4.0/3.0) * pi * pow(radius, 3);
            printf("volume is %lf\n", result);
         break;
         default:
         printf("Invalid option.\n");
     }

    //4
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);

    switch(letter)
     {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
         printf("%c is vowel \n");
       break;
       default:
         printf("%c is not vowel\n");
     }

    //5

    int days;
    switch(month)
     {
        case 2:
          days = 28;
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          days = 31;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
          days = 30;
        break;
        default:
          printf("days in month: %d\n", days);

     }

    // loops
    // 1
    // while loop
    int i=0;
    while(i<=100)
    {
        printf("%d",i);
        i++
    }
    // do while loop
    int i=0;
    do
    {
        printf("%d",i);
        i++
    }
    while(i<=100);

    //for loop
    for(int i=0; i<=100; i++)
    {
      printf("%d",i);
    }

    //2
    int mark,total=0;
    float avg;

    for(int i=0; i<10; i++)
    {
        printf("Enter Marks ");
        scanf(" %d",&mark);
        total =total + mark;
    }

    avg= (float)total/10;
    printf("Total is a %d \n",total);
    printf("AVG is a %.2f \n",avg);
    if(avg>50)
    {
      printf("pass");
    }
    else
    {
      printf("Fail");
    }

    //3
    int num,value=1;
    printf("Enter Number ");
    scanf(" %d",&num);
    for(int i=1; i<=num; i++)
    {
    value *= i;
    }
    printf("%d",value);

    //4
    int num,remainder,sum = 0;
    printf("Enter integer: ");
    scanf("%d", &num);

    while (num != 0)
    {
       remainder = num % 10;
       sum = sum+remainder;
       num = num/10;
    }

    printf("Sum : %d", sum);

    //5
    int num, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        reverse = reverse * 10 + num % 10;
        num =num/ 10;
    }
    while (num != 0);

    printf("Reverse number: %d", reverse);

    //6
    int base,exponent,value=1;

    printf("enter base");
    scanf(" %d",&base);
    printf("enter exponent");
    scanf(" %d",&exponent);

    for(int i=1; i<=exponent; i++)
    {
       value = value * base ;
    }
    printf("%d",value);

    //7
    int i, num=10, p1=0, p2=1,next;

    printf("The first %d Fibonacci sequence are: ",num);

    for (i = 1; i <= num; ++i)
    {
        printf("%d, ", p1);
        next = p1 + p2;
        p1 = p2;
        p2 = next;
    }
    printf("%d",next);

    //8

    int num,rem,sum,=0,temp;

    printf("Enter a number");
    Scanf("%d",num);
    temp=num;

    while(temp != 0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is an Armstrong number",num);
    }
    else
    {
        printf("%d is not an Armstrong number",num);
    }

    //9
    char c[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',' O','P','Q','R','S','T','U','V','W','X','Z'};
    for(int i=0; i<25; i++ )
    {
        int value = (int)c[i];
        printf("The ASCII value is '%c' is: %d\n\n", c[i], value);
    }

    //10
    int n=5;
    for(int i=1 ; i<=n; i++)
    {
    for(int j=1; j<=i; j++)
    {
        printf("*");
    }
    printf("\n");

    //11
    int i,num,done=0;
    printf("Enter a Number ");
    scanf(" %d", &num);
    for(i=2; i<=num/2; i++)
    {
    if(num%i == 0)
    {
        done = 1;
        break;
    }
    }
    if (done == 1)
    {
        printf("%d is not prime number.");
    }
    else
    {
        printf("%d is a prime number.");
    }

    //12
    int i,num;

    printf("Enter a Number ");
    scanf(" %d", &num);

    for(i=1; i<=num; i++)
    {
       if(num%i == 0)
       {
         printf(" %d",i);
       }
    }
    //13
    int num,sum=0;

    printf("Enter a Number ");
    scanf("%d",&num);

    while(-1!=num)
    {
        sum=sum+num;
        printf("Enter a Number ");
        scanf("%d",&num);
    }
    printf("Total is : %d ",sum);

    //14
    int num[10];

    for(int i=0; i<10; i++)
    {
    printf("Enter a  Number ");
    scanf(" %d",&num[i]);
    }
    for(int i=0; i<10; i++)
    {
    printf(" %d",num[i]);
    }

    //15
    int num[10],count=0;

    for(int i=0; i<10; i++)
    {
        printf("Enter a Number ");
        scanf(" %d",&num[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(num[i]%2==0)
        {
        count++;
        }
    }
    printf("even number count is %d",count);

    return 0;
}
