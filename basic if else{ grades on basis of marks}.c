#include<stdio.h>
main()
{

    printf("enter the marks");
    int marks;
    scanf("%d",marks);

    if(marks>=85)
    {
        printf("Grade A");

    }
    else if(70<=marks && marks<85)
    {
        printf("Grade B");

    }
    else if (55<=marks && marks<70)
    {
        printf("Grade C");

    }
    else if(40<=marks && marks<55)
    {
        printf("Grade D");

    }
    else
       {

        printf("Grade F");
        }
    return(0);
}
