#include<stdio.h>
int main()
{
    int a[30];
    int i=0, b,c, d;
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
    printf("Select a no to find frequemcy of");
    scanf("%d", &c);
    d= occ(c);
    printf("Frequency of %d= %d", &c);
}

int occ(int len, int arr[], int n)
{
    int freq = 0;
    for (int i = 0; i < len; i++)
        if (arr[i] == n)
        {
            freq ++ ;
        }


    return freq;
}