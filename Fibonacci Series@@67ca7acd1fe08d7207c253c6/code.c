#include <stdio.h>
int fibonacciSeries(int n){
    if (n==0)
    return 0;
    else 
    return fibonacciSeries(n)+fibonacciSeries(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    if (num<=0) {
        printf("invalid input\n");
        return 0;
    }
    else {
        printf("%d",fibonacciSeries(num));
    }
}