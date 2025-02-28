#include <stdio.h>

int main(){
    int num = 10;
    int *ptr = &num;
    printf("Value of num --> [num = %d]\n", num);
    printf("Address of num --> [&num = %p]\n", &num);
    printf("Value of ptr --> [ptr = %p]\n", ptr);
    printf("Address of ptr --> [&ptr = %p]\n", &ptr);
    printf("Value of *ptr --> [*ptr = %d]\n", *ptr);
    return 0;    
}