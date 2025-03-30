#include <stdio.h>
int main(){
    int N;
    int arr[N];
    scanf("%d",&N);
    int sort = 0;
    for(int i=0;i<=N;i++){
        scanf("%d\n",arr[i]);
    }
    for(int i=0;i<=N-1;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i+2]){
            sort = 1;
        }
    }
    if (sort==1){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
}