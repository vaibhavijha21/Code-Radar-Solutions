#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive\n");
    }
    else{
        printf("Zero\n");
    }
    if (a<0){
        printf("Negative");
    }
    return 0;
}