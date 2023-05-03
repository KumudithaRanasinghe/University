#include <stdio.h>
#include <stdlib.h>
int highest(int,int,int);
int max;

int main()
{
  int n1,n2,n3;

  printf("Enter n1 n2 n3 :");
  scanf("%d %d %d",&n1,&n2,&n3);

  max=highest(n1,n2,n3);
  printf("highest value is %d",max);


    return 0;
}
int highest(int a, int b, int c)
{

    max=a;
    if(max<b)
    {
        max=b;
    }
    if(max<c)
    {
        max=c;
    }
    return max;
}
