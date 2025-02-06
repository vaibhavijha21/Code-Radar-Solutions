#include <stdio.h>

int main(){;
    unasigned int a;
    scanf("%u",&a);
    printf("%d",__builtin_clz(a));
    return 0;
}