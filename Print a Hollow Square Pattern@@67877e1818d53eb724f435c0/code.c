#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int j=0;j<=i;j++){
            if (i==1||i==n||j==n||j==1){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}