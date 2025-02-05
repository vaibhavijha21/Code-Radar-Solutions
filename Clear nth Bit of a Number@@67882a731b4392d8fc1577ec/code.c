#include <stdio.h>
int main() {
    int a,b,operate;
    scanf("%d %d",&a,&b);
    operate=a&~(1>>b);
    printf("%d",operate);
    return 0;
}