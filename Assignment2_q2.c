#include<stdio.h>
int main()
{
    int c[30];
    int i, d,z;
    printf("Enter the no of inputs you want");
    scanf("%d",&b);
    if(d<30)
    {
            for(i=0;i<d+1;i++)
            {
                printf("input the desired no");
                scanf("%d", &c[i]);

            }

    }

    if(d>30)
    {
        d=30;
            for(i=0;i<31;i++)
            {
                printf("input the desired no");
                scanf("%d", &c[i]);

            }

    }
    int a[30];
    int b;
    printf("Enter the no of inputs you want");
    scanf("%d",&b);
    if(b<30)
    {
            for(i=0;i<b+1;i++)
            {
                printf("input the desired no");
                scanf("%d", &a[i]);

            }

    }

    if(b>30)
    {
        b=30;
            for(i=0;i<31;i++)
            {
                printf("input the desired no");
                scanf("%d", &a[i]);

            }

    }
    z=d+b;
    int e[z];
    for(i=0,i<=b,i++)
    {
        e[i]=a[i];
    }
    for(i=b,i<=z,i++)
    {
        e[i]=c[i-b];
    }
    for(i=z-1,i>=0,i--)
    {
        printf("%d ", e[i]);
    }

    

}
