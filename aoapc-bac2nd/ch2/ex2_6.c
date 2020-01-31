#include<stdio.h>
void swap(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}
void reverse(int a[], size_t first, size_t last){ // [first, last)
    while((first != last) && (first != --last)){
        swap(a+(first++), a+last);
    }
}
int perm(int a[], size_t first, size_t last){ // [first, last)
    if(first == last) return 0;
    size_t i = last;
    if(first == --i) return 0;

    while(1){
        size_t i1, i2;
        i1 = i;
        if(a[--i]<a[i1]){ // 如果 a[i1] 前还有顺序对，则可通过产生逆序对遍历空间
            i2 = last;
            while(!(a[i] < a[--i2])); // 检查还有没有在i1右侧的顺序对，将之先行逆序
            swap(a+i, a+i2);
            reverse(a, i1, last);
            return 1;
        }
        if(i == first){
            reverse(a, first, last);
            return 0;
        }
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    //int a[4] = {1, 2, 3, 0};
    do{
        for(int i=0; i<3; i++) printf("%d ", a[i]);
        printf("\n");
    }while(perm(a, 0, 3));
    
    return 0;
}