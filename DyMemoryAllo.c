#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr;
    int n;
    printf("Enter the size of array\n");
    scanf("%d", &n);

    // // Use of malloc

    // ptr = (int *) malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the %d value of array\t",i);
    //     scanf("%d", &ptr[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d is %d\n",i,ptr[i]);
    // }

    // // Use of calloc

    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d number of array\t", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }

  //  // Use of relloc

    printf("Enter the size of new array\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the %d number of array\t", i);
    //     scanf("%d", &ptr[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }
    
    // // To free up the existing ptr memory
    
    free(ptr);

    return 0;
}