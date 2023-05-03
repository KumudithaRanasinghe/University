#include <stdio.h>
#include <stdlib.h>
//4 with return type, with parameters

int findsum(int a ,int b)
{
    int sum;

    sum=a+b;

    return sum;
}
int main()
{
    //function call
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);
    printf("sum is :%d",findsum(n1,n2));// with return type you must use function inside printf



    return 0;
}
