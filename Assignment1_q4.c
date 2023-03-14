#include <stdio.h>
int main()
{
    int i;
    printf("Enter your choice of arithmetic opperatrion..1=Multiply\n 2=Add\n 3=divide\n 4=Subtract\n.. i=");
    scanf("%d", &i);
    int e,b,c;
    printf("Enter an integer of a=");
    scanf("%d", &e);
    printf("Enter an integer of b=");
    scanf("%d", &b);
    switch(i)
    {
        case(1):
            c=e*b;
        break;
        case(2):
            c=e+b;
        break;
        case(3):
            c=e/b;
            break;
        case(4):
            c=e-b;
            break;

        
        default:
            printf("Select an item from the given option only");
        

    }
    printf("%d", c);

}