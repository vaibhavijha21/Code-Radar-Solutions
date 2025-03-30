void bubbleSort(int arr[],int n){
    int swap;
    for(int i = 0;i<n-1;i++){
        swap = 0;
        for(int j=0;j<n-i-1;j++ ){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            swap=1;
        }
        if (swap==0)
            break;
        
    }
}
void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}