#include <Stdio.h>
int main()
{
    int len;
    printf("Length of Array: ");
    scanf("%d", &len);

    int array[len];
    printf("Enter The Array: ");
    for (int i = 0; i < len; i++)
        scanf("%d", &array[i]);

    int max = array[0];
    for (int i = 0; i < len; i++)
        if (array[i] > max)
            max = array[i];

    printf("Maximum = %d", max);
}