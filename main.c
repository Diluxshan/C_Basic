#include <stdio.h>


int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main() {
    printf("C basics and final one\n");
    printf("Addition is     : %d\n",add(5,8));
    printf("Subtraction is    : %d", sub(6.5, 0.5));
}

