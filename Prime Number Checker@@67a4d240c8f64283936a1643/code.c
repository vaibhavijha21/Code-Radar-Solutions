#include <stdio.h>
int isPrime(int num){
    for (int i=0;i*i<=num;i++){
        if (num%i==0){
            return 0;
        }
        return 1;
    }
}

