#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b || c>(a+b)){
        printf("valid");
    }
    else if (b>=a || c>(a+b)){
        printf("Invalid");
    }
    return 0;
}