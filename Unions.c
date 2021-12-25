#include <stdio.h>
#include <string.h>
union san {
    int id;

    float marks;
    char name[34];


};

int main()
{ /*typedef struct san s;
s s1,s2;
    s1.id = 78451;

    s1.marks = 45.25;
    printf("%d",s1.id);*/
    typedef int *ip;
    ip a, b;
    int c;
    a = &c;
    b = &c;
    typedef union san s;
    s s1;
    strcpy(s1.name,"san");
    s1.id = 5;
    s1.marks = 86543; // the last declared s1.marks will be considered...
    printf("%d\n",s1.id);
    printf("%f\n",s1.marks);
    printf("%s\n",s1.name);

    return 0;
}
