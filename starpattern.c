#include<stdio.h>

int main()
{
   int a,b;
   printf("Enter 1 for triangular star pattern\n");
   printf("Enter 2 for reverse triangular star patern\n");
   scanf("%d",&a);
   

   switch (a)
   {
   case 1:
   printf("Enter the number of rows\t");
   scanf("%d",&b);
       for(int i=0;i<b;i++){
          for (int j = 0; j < i+1; j++)
          {
              printf("%c",'*');
          }
         printf("\n");   
         


       }
       break;
  case 2:
  printf("Enter the number of rows\t");
   scanf("%d",&b);
        for (int i = b+1; i > 0; i--)
        {
            for (int j = 0; j <i; j++)
            {
                printf("%c",'*');
            }
            printf("\n");
        }
        
   default:
    printf("Invalid no. :)");
       break;
   } 
    return 0;
}
