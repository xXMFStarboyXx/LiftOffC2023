#include<stdio.h>
int main()
{
    int c[30];
    int i, d;
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
    int a[d];
    for(i=0;i<d+1;i++)
    {
       a[i]= c[i];
       printf("%d\n", &c[i]);

    }
    
    
}
