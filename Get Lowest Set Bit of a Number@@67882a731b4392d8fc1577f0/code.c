#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u",&a);
    printf("%d",_builtin_clz(a));
    return 0;
}