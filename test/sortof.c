#include "stdio.h"

const int max = 5;

int main(){
    int var[] = {1, 2, 3, 4, 5};
    int* ptr[5];
    for (int i = 0; i < max; i++){
        ptr[i] = &var[i];
    }
    for(int i = 0; i < max; i ++){
        printf("Value of var[%d] = %d\n",i, *ptr[i]);
    }
    return 0;
}