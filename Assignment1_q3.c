#include <stdio.h>
int main()
{
    int i,a,b,c=0;
    printf("Enter a value of i=");
    scanf("%d", &i);
    while(i!=0)
    {
        a=i%10;
        c=c+a;
        i=i/10;
    }
    printf("%d", c);
}