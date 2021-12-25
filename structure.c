#include <stdio.h>
 struct san
{
    int id;

    float marks;
};


int main()
{/*typedef struct san s;
s s1,s2;
    s1.id = 78451;

    s1.marks = 45.25;
    printf("%d",s1.id);*/
    typedef int* ip;
    ip a,b;
    int c;
    a=&c;
    b=&c;

    return 0;
    
}
