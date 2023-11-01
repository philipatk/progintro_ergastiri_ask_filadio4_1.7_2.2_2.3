#include <stdio.h>
#include <math.h>
int collatz (int NUM , int count){
    if  (NUM != 1){
    if( NUM%2 == 0 ) NUM = NUM/2;
    else NUM =( 3* NUM) + 1;
    count = collatz(NUM , ++count);
    }
    return count;
}

int main() {
        int count = collatz(1 , 1);
        printf("%d\n" , count);
}