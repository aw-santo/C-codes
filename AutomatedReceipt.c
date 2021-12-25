#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replaceword(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int NewWordLength = strlen(newWord);
    int OldWordLength = strlen(oldWord);

    // counting the no. times old word occurs
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            //jumping over this word
            i = i + OldWordLength - 1;
        }
    }

    //making new string to replace
    resultString = (char *)malloc(i + count * (NewWordLength - OldWordLength) + 1);
    i = 0;
    while (*str)
    {
        //compare the sub string with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += NewWordLength;
            str += OldWordLength;
        }
        else
        {
            resultString[i] = *str;
            i += 1;
            str += 1;
        }
    }
    resultString[i] = '\0';
    return resultString;
}
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    ptr = fopen("Bill.txt", "r");
    ptr2 = fopen("Genbill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The bill template was %s\n", str);
    //Calling the replace fn...
    char *Nstr ;
    Nstr=replaceword(str,"{{item}}","Table fan");
    Nstr=replaceword(Nstr,"{{outlet}}","Ram Enterprises");
    Nstr=replaceword(Nstr,"{{name}}","san");
    printf("The bill template is %s\n", Nstr);
    fprintf(ptr2, "%s", Nstr);
    fclose(ptr);
    fclose(ptr2);

    // char name[35] = "san";
    // char outlet[20] = "Ram Enterprises";
    // char item[25] = "Samsung QLED TV";

    // fprintf(ptr, "%s");
    return 0;
}