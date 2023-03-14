#include <stdio.h>
int main()
{
    int i=0;
    printf("Enter a value of i to check for its direction.... i=");
    scanf("%d", &i);
    if (i<0)
    {
        printf("I is a negative integer");
    }
    else if(i=0)
    {
        printf("I is 0");
    }
    else
    {
        printf("I is a positive integer");
    }
}