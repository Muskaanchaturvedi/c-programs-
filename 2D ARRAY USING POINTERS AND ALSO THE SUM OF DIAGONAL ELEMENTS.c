#include<stdio.h>
int main()
{
    int a[3][3],i,j,*p,sum;
    printf ("enter the elements of a 3*3 array");
    for(p =&a[i][j];p<=&a[3][3];p++)
    {
        scanf("%d",p);
        printf("%d",*p);
    }
    for(p=&a[i][j];p<=a[3][3];p++)
    {
        if (i==j)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum of diagonal element is%d",sum);
}

