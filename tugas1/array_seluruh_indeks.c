#include<stdio.h>

int main(){
    int userAge[5]={10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 3; i++){
        printf("%d", userAge[i]);
        if (i < 2){
            printf(" ");
        }
    }
}