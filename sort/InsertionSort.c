/**
 * 插入排序 Insertion Sort
 * 对于 P = 1 到 P = N - 1 趟的过程中，对于每一个元素，将其所有更大的元素右移一位，然后将该元素放置在正确的位置上
 **/
#include <stdio.h>
int main(){
    int a[8] = {3,1,7,5,2,4,9,6};
    InsertionSort(a,8);
    return 0;
}

// 自定义输出函数
void print(int a[], int n, int i){
    printf("%d:", i);
    for(int j = 0; j < n; j ++){
        printf("%d", a[j]);
    }
    printf("\n");
}

//直接插入排序函数
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i ++){
        if(a[i] < a[i - 1]){
            int j = i - 1;
            int x = a[i];
            while(j > -1 && x < a[j]){
                a[j + 1] = a[j];//采用顺序查找的方式找到插入位置，在查找的同时，将数组的元素后移一位，给插入元素腾出空间
                j --;
            }
            a[j + 1] = x; // 插入导致正确位置
        }
        print(a, n, i);
    }
}