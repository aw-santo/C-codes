#include <stdio.h>

void arrayrev(int arr[])
{
    for (int i = 0; i < 5/2; i++)
    {
        int temp=arr[i];
         arr[i]=arr[4-i];
         arr[4-i]=temp;
    }
    
}

int main()
{
    int array[] = {1, 5, 8, 6, 4};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

    arrayrev(array);
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", array[i]);
    }
    return 0;
}
