#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = N;i < N-i;i--){
        printf("*");
    }
    printf("\n");
}