#include<stdio.h>
#include<stdlib.h>
// #define SQUARE(x) x*x//This is how we can create custom macros

int main(){
// printf("%d",SQUARE(85));// This is macro defined in #define.
printf("File name is %s\n",__FILE__);
printf("Time now is %s\n",__TIME__);
printf("Date is %s\n",__DATE__);
printf("Line no. is %d\n",__LINE__);        //These are all pre-defined macros...
// printf("File name is %s\n",__DATE__);
printf("ANSI : %d\n",__STDC__);

}