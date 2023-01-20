#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1
    printf("Name - R.A.K.R Ranasinghe\n");
    printf("School - St.Thomas'College Matale\n");

    //2
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

    //3
    int num1 = 2;
    printf("int - %d\n",num1);

    float num2 = 0.5;
    printf("float - %.1f\n",num2);

    double num3 = 0.5555555;
    printf("double - %f\n",num3);

    char letter = 'a';
    printf("char - %c\n",letter);

    //4
    int num4,num5,total;

    printf("Enter the first number :");
    scanf("%d",&num4);
    printf("\nEnter the second number :");
    scanf("%d",&num5);
    total=num4+num5;
    printf("total: %d\n",total);


    //5
    float num6,num7,average;

    printf("Enter the first number :");
    scanf("%f",&num6);
    printf("\nEnter the second number :");
    scanf("%f",&num7);
    average=(num6+num7)/2;
    printf("average: %f\n",average);

    //6
    char sname[30];
    int by,cy,age;

    printf("Enter student name :");
    scanf("%s",&sname);
    printf("\nEnter birth year :");
    scanf("%d",&by);
    printf("\nEnter current year :");
    scanf("%d",&cy);
    age=cy-by;
    printf("%s age: %d\n",sname,age);

    //7
    int num8,num9,temp;

    printf("Enter first number :");
    scanf("%d",&num8);
    printf("\nEnter second number :");
    scanf("%d",&num9);
    printf("before swap\n first number= %d\n second number= %d\n",num8,num9);

    temp=num8;
    num8=num9;
    num9=temp;

    printf("after swap\n first number= %d\n second number= %d\n",num8,num9);

    //8
    printf("The color: %s\n","blue");
    printf("First number: %d\n",12345);
    printf("Second number: %04d\n",25);
    printf("Third number: %i\n",1234);
    printf("Float number: %3.2f\n",3.14159);
    printf("Hexadecimal: %x\n",255);
    printf("Octal: %o\n",255);
    printf("Unsigned value: %u\n",150);
    printf("Just print the percentage sign %%\n",10);






    return 0;
}
