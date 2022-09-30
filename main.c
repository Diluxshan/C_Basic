#include <stdio.h>


int Add(int a, int b){
    return a+b;
}

int Subb(int a, int b){
    return a-b;
}

int Multiple(int a, int b){
    return a * b;
}

int main() {
    printf("C basics and final one\n");
    printf("Addition is         : %d\n", Add(5, 8));
    printf("Subtraction is      : %d\n", Subb(6.5, 0.5));
    printf("Myltiplation is     : %d\n", Multiple(2, 4));
    printf("All the functions are working fine");



}