#include <stdio.h>
#include <string.h>
// #include<stdlib.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("san.txt", "w");
    char str[34] ;
    // fgets(str,5,ptr);
    // printf("%s",str);

    // char c = fgetc(ptr);
    // printf("character is : %c\n", c);
    // c=fgetc(ptr);
    // printf("character is : %c\n", c);


    //****Reading a file
    // fscanf(ptr, "%s", str);
    // printf("%s\n", str);

    //****Writing a file
    // ptr = fopen("san.txt", "a");
    // for (int i = 0; i < 100; i++)
    // {
    //     // printf("%d",i+1);
    // fprintf(ptr,"%d. %s\n",i+1, str);
    //     // printf("\n");
    // }

fputc('f',ptr);
fputs("f bolte!!",ptr);
    fclose(ptr);

    return 0;
}