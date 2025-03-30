#include <stdio.h>
void sorted(int N,int arr[]){
    int sorted = 1;
    for(int i=0;i<=N-1;i++){
        if(arr[i] > arr[i+1]){
            sorted = 0;
            break;
        }
        
    }
    if (sorted){
        printf("Sorted\n");
    }
    else{
        printf("Not Sorted\n");
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