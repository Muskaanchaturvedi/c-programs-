#include<stdio.h>
int isprime(int,int);
int main()
{
    int num,check;
    printf("enter no.");
    scanf("%d",&num);

    if(num==1 || num==0)

       {printf(" not prime no.");}
    else
    {
      check=isprime(num,num/2);

       if (check==1)
        {
           printf("prime no.");
        }
       else
        {
          printf("not prime");
        }
    }
    return(0);

}


     int isprime(int n,int i)
    {
       if(n%i==0)
        {
         return 0;
        }
        else if (i==2)
        {
          return 1 ;
        }
       else
        {
         isprime( n,  i-1);
        }

    }


