#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    while (a>0){
        printf("%d", a & 1);
        a >>=1;
    }
    printf("\n");
    return 0;
}