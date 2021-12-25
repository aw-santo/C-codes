#include <stdio.h>
// #include<string.h>
// #include<stdlib.h>
int main()
{
    int a, b, c, d, sum = 0;
    // int Array1[a][b];   //since any one quantity in 2d array must be defined declaration of array is done after declaration of rows and columns
    // int Array2[c][d];

    printf("For Array1 : \n");
    printf("Enter the no. of rows :\n");
    scanf("%d", &a);
    printf("Enter the no. of columns :\n");
    scanf("%d", &b);
    int Array1[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("The value for (%d,%d) :\t",i,j);
            scanf("%d", &Array1[i][j]);
            
            printf("\t");
        }
            printf("\n");
    }
    printf("Entered Array1 is :\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d", Array1[i][j]);

            printf("\t");
        }
        printf("\n");
    }

    printf("For Array2 : \n");
    printf("Enter the no. of rows :\n");
    scanf("%d", &c);
    if (b == c)
    {

        printf("Enter the no. of columns :\n");
        scanf("%d", &d);
     int Array2[c][d];   

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("The value for (%d,%d) :\t",i,j);
                scanf("%d", &Array2[i][j]);
                printf("\n");
            }
        }
        printf("Entered Array2 is :\n");
        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                printf("%d", Array2[i][j]);

                printf("\t");
            }
            printf("\n");
        }
        printf("Multiplication Matrix is : \n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < d; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    sum += (Array1[i][k] * Array2[k][j]);
                }
                printf("%d", sum);
                printf("\t");
                sum = 0;
            }
            printf("\n");
        }

        /*code after if*/
    }
    else
    {
        printf("***Since the no. column/s of Array1 is/are not equal to no. row/s of Array2\n***");
        printf("Matrix Multiplication is not possible!!!");
    }

    return 0;
}