#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sorted=1;
    int arr[N];
    for(int i=0;i<=N;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<N-1;i++){
        if (arr[i]> arr[i+1]){
            sorted =0;
            break;
        }

    }
    if (sorted){
        printf("Sorted\n");
    }
    else {
        printf("Not Sorted"\n);
    }
    
    return 0;
}