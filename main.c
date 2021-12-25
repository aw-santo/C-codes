#include<stdio.h>

void table(int n){
    

    for (int i = 1; i <= 10 ; i++)
    {
       printf ( "%d\n" ,n * i) ;
    }
    

}

int main()
{  int a;
   printf("enter the number : \t");
   scanf("%d",&a);
    table(a);
    
    return 0;
}
