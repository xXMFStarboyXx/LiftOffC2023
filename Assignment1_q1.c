#include <stdio.h>
int main()
{
    int i=0;
    for (i; i<=100; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("Fuzz Buzz\n");
        }
        else if (i%3==0)
        {
            printf("Fuzz\n");
        }
        else if (i%5==0)
        {
            printf("Buzz\n");
        }
        else 
        {
            printf("%d\n", i);
        }
    }

}