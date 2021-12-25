#include<stdio.h>

int fib(int i){
    if (i==1 || i==2)
    {
        return i;
    }
    else
    {
        printf("%d\n",fib(i-1) + fib(i-2));
    }}
 int main()
{
  int a;
  printf("enter the no.\n");
  scanf("%d",&a);

  fib(a);
  return 0;
  

}
    


