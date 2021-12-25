#include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
int main(int argc, char const *argv[])
{
    printf("value of argc %d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%d has value of %s\n",i,argv[i]);
    }
    
    return 0;
}

// .\CommandLineArgument.exe san is the only op is the!!! 