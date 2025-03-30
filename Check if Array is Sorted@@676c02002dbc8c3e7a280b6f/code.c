#include <stdio.h>
void sorted(int N,int arr[]){
    for(int i=0;i<=N-1;i++){

    
        if(arr[i] > arr[i+1]){
            printf("Not Sorted");
        }
        else {
            printf("Sorted");
        }
    }
    
}
int main(){
    int N;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<=N;i++){
        scanf("%d ",&array[i]);
    }
    sorted(N,array);
    return 0;
}