#include <stdio.h>
int prime(int t){
    if (t<=1) {
        return 0;
    }
    for (int i=0;i*i<=t;i++){
        if (t % i == 0){
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