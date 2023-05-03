#include <stdio.h>
#include <stdlib.h>
/*int pakaya(int a,int b, int c);
int highest;*/
//void sec(int);

int main()
{
    //2
  /*int n,positive=0,negative=0,zero=0,sum=0;
  float avg;
  printf("28452\n");

  for(int i=0;i<5;i++)
  {
      printf("Enter number %d : ",i+1);
      scanf("%d",&n);
      sum+=n;


      if(n>0)
      {
          positive++;
      }
      else if(n<0)
      {
          negative++;
      }
      else if(n==0)
      {
          zero++;
      }

  }

  avg=sum/5;



  printf("avg is :%.2f\n",avg);
  printf("total number of postives :%d\n",positive);
  printf("total number of negatives :%d\n",negative);
  printf("total number of zeros :%d\n",zero);*/

  //3

 /* int i=0;

  while(i<=5)
  {
      int j=0;
      while(j<i)
      {
        printf("*");
        j++;
      }

      printf("\n");
      i++;

  }
  int i=1;

  do
  {
      int j=0;
        do
     {

         printf("*");
         j++;
     }
         while(j<i);

     printf("\n");
     i++;

  }
  while(i<=5);*/

    //4

   /* int n1,n2,cal;
  printf("Enter number two numbers :");
  scanf("%d %d",&n1,&n2);



  printf("1.Add\n");

  printf("2.subtract\n");

  printf("3.Multiply\n");

  printf("4.Divide\n");

  printf("5.exit\n");

  printf("Enter the arithmetic operation(1-4)and 5 to exit :");
  scanf("%d",&cal);




  switch(cal)
  {



  case 1:
      printf("sum = %d",n1+n2);
      break;
  case 2:
       printf("sub = %d",n1-n2);
      break;
  case 3:
       printf("mult = %d",n1*n2);
    break;
  case 4:
     printf("divide = %d",n1/n2);
    break;
  default:
    printf("exit");
  }*/

  //4

  /*int n1,n2,n3;

  printf("Enter 3 values :");
  scanf("%d %d %d",&n1,&n2,&n3);

  highest=pakaya(n1,n2,n3);

  printf("highest value is :%d",highest);


  return 0;
}

int pakaya(int a,int b, int c)
{

    int highest =0;

    highest=a;
    if(b>highest)
    {
       highest=b;
    }
    if(c>highest)
    {
        highest=c;
    }

    return highest;
}*/
   /* int n;

    printf("ENTER 10 NUMBERS \n");

    for(int i=0;i<10;i++)
    {
        printf("Enter number %d :",i+1);
        scanf("%d",&n);
        sec(n);
    }

    return 0;
}

void sec(int a)
{
    if(a<0)
    {
        printf("the number is negative\n");
    }
    if(a>0)
    {
        printf("the number id positive\n");
    }
    if(a==0)
    {
        printf("the number is zero\n");
    }
}*/

    //5
    int arr[10];
    int max;
    int min;

    max=min=arr[0];


    for(int i=0;i<10;i++)
    {



        printf("Enter price of item %d :",i+1);
        scanf("%d",&arr[i]);


        if(arr[i]<min)
        {
           min=arr[i];

        }

        else
        {
           max=arr[i];
        }
    }

    printf("the highest price is :%d",max);
    printf("the lowest price is :%d",min);


    return 0;
}






