#include <stdio.h>
int main()
{
    int i, a, j, c=1;
    printf("Enter the no of time you want to run the loop");
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for (j=0,j<=i,j++)
        {
            printf("%d",c );
            c++;
        }
    }
}