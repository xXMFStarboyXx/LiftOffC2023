#include <stdio.h>
#include <math.h>
int main()
{
    int i;
    float a,b,c;
    printf("Enter a value of radius.... i=");
    scanf("%d", &i);
    a=2*3.14*i;
    b=2*i;
    c=3.14*pow(i,2);
    printf("Area=%f\n Diameter=%f\n Perimeter=%f\n", c,b,a);
    
}