#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k = 1 ;k<=N-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int l=i-1;l>=1;l++){
            printf("%d",l);
        }
        printf("\n");
    }
}