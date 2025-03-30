#include <stdio.h>
int main(){
    int N;
    int sum;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        sum=0;
        sum= sum + i;
        printf("%d",sum);
    }
}