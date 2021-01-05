#include <stdio.h>
int lcm (int n, int m, int k);
int main()
{
    int a,b,k,result;
    printf ("enter 2 no.s");
    scanf("%d%d",&a,&b);
    k=(a>b)?a:b;

    if(a==1||b==1)
        printf("%d",a*b);
    else if (a==b)
        printf("%d",a);
    else
        {result =lcm(a,b,k);
    printf("%d",result);}
    return(0);
}

int lcm(int n,int m ,int k)
{
        if(k%n==0&&k%m==0)
            return k;
        else
        {
            int r;
            r=(n>m)?n:m;
            k+=r;
            lcm(n,m,k);

        }
    }

