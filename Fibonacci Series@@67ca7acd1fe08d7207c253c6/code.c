#include <stdio.h>
int fibonacciSeries(int n){
    if (n == 0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
int main(){
    int num;
    scanf("%d",&num);
    if (num<0) {
        printf("invalid input\n");
        return 0;
    }
    else {
        printf("%d",fibonacciSeries(num));
    }
    return 0;
}












































































