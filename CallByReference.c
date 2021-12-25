#include<stdio.h>

int new(int *x,int *y){
    int temp;
    temp=*x;
     printf("%d\n",x);
    printf("%d\n",y);
    if (*x>*y)
   
    
    
    {
        *x=temp+*y;
        *y=temp-*y;
    }
    
    else
    {
        *x=temp+*y;
        *y=*y-temp;
    }
    
    return 0;
}

int main()
{
    int a,b;
        printf("Enter two numbers :\n");
        scanf("%d\t%d",&a,&b);
        printf(" a= %d\tb=%d\n",a,b);

    new(&a,&b);
    printf(" now a & b is : a=%d\tb=%d\n",a,b);
    printf("%d\n",&a);printf("%d\n",&b);
    
    return 0;
}
