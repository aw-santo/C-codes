#include <stdio.h>
int zax;
int main()
{
    int a, b;
    int Result_Array[a][b];
    printf("[Number of rows and columns are same for both arrays !]\a\n");
    printf("Enter the number of rows :\n");
    scanf("%d", &a);

    printf("Enter the number of columns :\n");
    scanf("%d", &b);

    int Array1[a][b];
    printf("For Array1\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of element (%d , %d) : ", i, j);
            scanf("%d", &Array1[i][j]);
        }
    }

     printf("Entered Array1 is\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t",Array1[i][j]);
            
        }
        printf("\n");
    }
      printf("\n") ; 
    int Array2[a][b];
    printf("For Array2\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the value of element (%d , %d) : ", i, j);
            scanf("%d", &Array2[i][j]);
        }
    }

    
     printf("Entered Array2 is\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t",Array2[i][j]);
            
        }
        printf("\n");
    }
    printf("\n") ;

    int z;
    printf("For Addition put : 1 \n");
    printf("For Subtraction put : 2 \n");
    printf("For Multiplication put : 3 \n");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        printf("Addition Array is : \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                
                printf("%d\t",Array1[i][j] + Array2[i][j]);

            }
            printf("\n");
        }
        break;

     case 2:
        printf("Subtraction Array is : \n");
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                
                printf("%d\t",Array1[i][j] - Array2[i][j]);

            }
            printf("\n");
        }
        break;

     case 3:
       printf("Multiplication Array is : \n");
       for(int i=0;i<a;i++)
        {
            for(int j=0;j<b;j++)
            {
                
                int zax=0;
                zax=zax+Array1[i][j]*Array2[j][i];//Needs to be clarified...
                

            }
             printf("%d",zax);
            printf("\n");
        }
       
        break;
    
    default:
         printf("Entered value is Invalid");
        break;
    }

    return 0;
}