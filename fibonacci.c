#include<stdio.h>

int main()
{
    int a,b=0,c=1,d;
    printf("Enter no. you want series of\n");
    scanf("%d",&a);
    printf("%d\n",b);
    printf("%d\n",c);
    for (int i = 0; i < a; i++)
    {
        d= b+c;
        printf("%d\n",d);
        b=c;
        c=d;
    }
    
    
    return 0;
}
