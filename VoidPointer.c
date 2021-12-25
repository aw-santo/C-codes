#include <stdio.h>
#include <string.h>
int main()
{
    int a = 85;
    float b = 95.425;
    void *ptr;
    

    ptr = &a;
    printf("%d\n", *(int *)ptr);
    ptr = &b;
    printf("%.2f\n", *(float *)ptr);
    
    return 0;
}