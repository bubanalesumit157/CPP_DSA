#include<stdio.h>

struct time{
    int hour;
    int min;
};
struct date{
    int dd;
    int mm;
    int year;
    struct time tm; 

};


int main(){
//     struct date d={12,1,2003,{2,44}};
//     struct date* m;
    
//     m=&d;
//     (*m).dd=3;
//     printf("%d\n",(m->dd));
//     printf("d:%d|%d|%d  t- %d:%d",m->dd,m->mm,m->year,m->tm.hour,m->tm.min);
// }
    int x=10;
    int *px, *ppx;
    int p=10;
    px = &x;
    ppx = &p;
    // Now if we write,
    printf("\n %d %d", *ppx+*px,(*ppx* * px));
}
