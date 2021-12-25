#include<stdio.h>
#include<stdlib.h>

                // ## 1.Deallocation


// int main()
// {
//     char *str="sanket";
//     int a;
//     int *ptr=(int *) malloc(sizeof(int));
//     free(ptr); //ptr now becomes dangling pointer ...

//     ptr=NULL; // ptr no longer is a dangling pointer!!!
    
//     return 0;
// }



                // 2.Returning Local Variable in F^n Calls



// int *myfunc(){
//     //a is local variable and hence goes out of the scope of the returning over...
//     int a=45;
//     return &a;
// }

// int main(){
// int *ptr=myfunc();//ptr is pointing towards the invalid add.
//  printf("%d",*ptr);//since myfunc() is returning the add of a local variable , ptr is holding an invalid //add.
// return 0;

// }


                // Variable going out of scope

// int main(){
// int *ptr;
// {
//     int i=0;
//     ptr=&i;// ptr is ponting towards an invalid add. 'cause 'i' is a local variable and cannot be used after the curly braces.
// }
// //Therefore ptr is now a dangling pointer.
// printf("%d",*ptr);
// return 0;
// }
