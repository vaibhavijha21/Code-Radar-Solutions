#include <stdio.h>

int main() {
    int a,b;
    ch c;
    scanf("%d %d %d",&a,&b,&c);
    if (c=="+"){
        printf("%d",a+b);
    }
    else if (c=="-"){
        printf("%d",a-b);
    }
    else if (c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b);
    }
    return 0;
}