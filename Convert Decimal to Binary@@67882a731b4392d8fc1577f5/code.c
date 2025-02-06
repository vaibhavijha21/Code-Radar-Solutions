#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while(a>0){
        printf("%d",a & 1);
        num>>=1;
    }
    printf("%d",num);
    return 0;
}