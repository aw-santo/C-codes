#include<stdio.h>
// int a=96;
int func(){
    
 static int a;
 a++;
 return a;

}
int main()
{
//    static
 int b=8;
   printf("%d\n",func());
//    int a=85;
   printf("%d\n",func());
   printf("%d\n",func());
    b++;
   printf("%d\n",func());
  

   
   

    return 0;
}
