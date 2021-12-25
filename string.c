#include<stdio.h> 
#include<string.h>

void printStr(char string[]){
int i=0;
while (string[i]!=0)
{
    printf("%c",string[i]);
    i++;
}



}

int main()
{
   //char str[5]="san";
   //gets(str);
  //  char san[30];
  //  gets(san);
  //  char sank[30];
  //  gets(sank);
  //  char sanke[]="is friend of";
   char sanke[]="is friend of";
   printf("%d",strlen(sanke));

   
  //  printf("%s %s ",san,strcat(sanke,sank)); 
//strrev(san);

  // puts(san);
  // printf("%d\n",strlen(san));
  // strcpy(sank,san);
 //  puts(sank);
//printf("%d",strcmp("san",""));
  // printStr(str);
    return 0;
}
