#include <stdio.h>

int main() {
    int number,a;
    scanf("%d %d",&number,&a);
    number^=(1<<a);
    printf("%d\n",number);
    return 0;
}
