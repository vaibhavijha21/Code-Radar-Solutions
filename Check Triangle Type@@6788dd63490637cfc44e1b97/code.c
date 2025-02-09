#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a==b && c<(a+b)){
        printf("Isosceles");
    }
    else if (a==b==c){
        printf("Equilateral");
    }
    else if (c>(a+b)){
        printf("Scalene");
    }
    return 0;
}