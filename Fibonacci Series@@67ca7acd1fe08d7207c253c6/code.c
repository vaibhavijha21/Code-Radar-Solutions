#include <stdio.h>
int fibo(int n){
    if (n==0)
    return 0;
    else 
    return fibo(n)+fibo(n-1);
}
int main(){
    int num;
    scanf("%d",&num);
    if (num<=0) {
        printf("invalid input\n");
        return 0;
    }
    else {
        printf("%d",fibo(num));
    }
}