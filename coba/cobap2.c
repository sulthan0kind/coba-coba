#include<stdio.h>

typedef struct coba {
    int x;
    int y;
}titik;

titik fungsitranslasi (titik t, int x, int y);
void prosedurtranslasi (titik *t, int x, int y); 

int main(){
    titik a;
    a.x =5;
    a.y =2;
    titik *p =&a;
    printf("%p\n",*p);
    printf("%p\n",&a.x);
    printf("%p\n",&a.y);

    return 0;
}

titik fungsitranslasi (titik t, int x, int y){
    t.x += x;
    t.y += y;
    return t;
}

void prosedurtranslasi(titik *t,int x,int y){
    t-> x += x;
    t-> x += y;
}
