#include<stdio.h>
// #include<string.h>
#include<stdlib.h>
int main()
{
    int a=5751;
    int *ptr; //This is a wild pointer...
    ptr=&a;//ptr is no longer a WILD pointer
    printf("%d",*ptr);

    return 0;
}