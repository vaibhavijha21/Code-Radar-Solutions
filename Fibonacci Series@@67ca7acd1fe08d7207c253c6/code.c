void fibonacciSeries(int N){
    if (N<=0){
        return;
    }
    else if (N==1){
        printf("0\n");
    }
    int t1 = 0, t2 = 1;
    printf("%d %d ",t1,t2);
    for(int i=3; i<=N;i++){
        int next = t1 + t2;
        printf("%d ",next);
        t1 = t2;
        t2 = next;
    }
    printf("\n");
        
}













































































