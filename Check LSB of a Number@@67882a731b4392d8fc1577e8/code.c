#include <stdio.h>

int main() {
    int a,operate;
    scanf("%d",&a);
    if (a&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    printf("%s", welcome());
    return 0;
}