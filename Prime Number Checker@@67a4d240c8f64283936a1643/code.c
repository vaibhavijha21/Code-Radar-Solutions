#include <stdio.h>
int prime(int num){
    if (num<=1) {
        return 0;
    }
    for (int i=0;i*i<=num;i++){
        if (num % i == 0){
            return 0;
        }
        else {
            return 1;
        }
    }
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int num;
        scanf("%d",&num);
        printf("%d\n",prime(num));
        
    }
    return 0;
}