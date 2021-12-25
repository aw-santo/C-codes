#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 0;
    char a,b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d : Enter the characters in your ID:\n", i + 1);
        scanf("%d", &n);//After this scanf the program will be in input buffer so if we put enter after giving this value , the 'ENTER' will be the value for 'a'...

        // So to tackle this we need to put 'getchar()' aftet the first scanf fumction so that the 'ENTER' will be fetched and not  detected as the input by the program... 
       
        getchar(); 
        printf("Enter the value of a:\n");
        scanf("%c",&a);
        getchar();
       
        printf("Enter the value of b:\n");
        scanf("%c",&b);
        // ptr = (char *)malloc((n + 1) * sizeof(char)); //for NULL character we need to put an extra character
        printf("Enter your Employee ID\n");
        scanf("%s", ptr);
        printf("Your Employee ID is : %s\n", ptr);
        free(ptr);
        i += 1;
        printf("\n\n");
        
    }

    return 0;
}