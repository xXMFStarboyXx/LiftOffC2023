#include <Stdio.h>
int main()
{
    int len,i,j,a,b,c;
    printf("Length of Array: ");
    scanf("%d", &len);

    int array[len];
    printf("Enter The Array: ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < len; i++) 
        for (j = i + 1; j < len-1; j++)
            if (array[i] > array[j]) 
            {
                a =  array[i];
                array[i] = array[j];
                array[j] = a;
            }
    printf("Negative Elements on one side: ");
    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
}
