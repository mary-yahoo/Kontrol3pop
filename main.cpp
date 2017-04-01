#include <iostream>
#include <stdio.h>
#include <cstdint>
#include <math.h>

void bin(int8_t b){
    for(int i=7;i>=0;i--)
        printf("%d", (b&int (pow(2,i))) ? 1 :0 );
}
void zad(int8_t A[]){
    for( int i=0; i<100;i++){
        A[i]=rand()%144-50;
    }
    //for (int j = 0; j < 100; j++) {
      //  printf("%d\n", A[j]);
    //}
}
void zad1(int8_t A[]){
    int8_t max=A[0];
    for (int i = 1; i < 100; i++) {
        if (max<A[i])
            max=A[i];
    }
    printf("Max = %d", max);
}
void zad2(int8_t A[]){
    int8_t chan;
    for (int i = 0; i < 50; i++) {
        chan=A[i];
        A[i]=A[99-i];
        A[99-i]=chan;
    }
    for (int j = 0; j < 100; j++) {
        printf("%d\n", A[j]);
    }
}
void zad3(int8_t A[]){
    for (int i = 0; i < 100; i++) {

        printf("A[ %3d ]=    %3d    %13o    %8x    ", i+1, A[i], A[i], A[i]);
        bin(A[i]);
        printf("\n");
    }
}
void zad4(int8_t A[]){
    for (int i = 0; i < 100; i++) {
        int8_t c=~A[i];
        //bin(c);
//        printf("\n");
//        bin(33);
//        printf("\n");
//        bin(37);
//        printf("\n");
//        printf("%d", c&33);
//        printf("\n");
        int8_t a = ((c & 33)==33) ? 1 : 0;

        int8_t b = ((A[i] & 26)==26) ? 1 : 0;
        if ((a==1)&&(b==1)){
            bin(A[i]);
            printf("\n");}
    }

}
int main() {
    int8_t A[100];
    zad(A);
    int n;
    printf("Введите число от 1 до 4: ");
    scanf("%d", &n);
    switch(n){
        case 1: zad1(A);
                break;
        case 2: zad2(A);
                break;
        case 3: zad3(A);
                break;
        case 4: zad4(A);
                break;
    }
        return 0;
}