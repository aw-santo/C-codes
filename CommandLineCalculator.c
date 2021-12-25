#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
   int a=(int)(argv[2]); 
   int b=(int)(argv[3]);
//    char c[10]=argv[1];
   if (argv[1]=="add")
   {
       printf("%d",a+b);
   }

   else if (argv[1]=="subtract")
   {
       printf("%d",a-b);
   }

    else if (argv[1]=="multiply")
   {
       printf("%d",a*b);
   }
    
    else if (argv[1]=="divide")
   {
       printf("%d",a/b);
   }
   
    return 0;
}




