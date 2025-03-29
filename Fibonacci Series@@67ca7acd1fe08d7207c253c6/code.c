void fibonacciSeries(int N){
    int t1=0, t2 = 1;
    printf("%d %d ",t1,t2);
    for(int i=3; i<=N;i++){
        int next = t1 + t2;
        printf("%d ",next);
        t1 = t2;
        t2 = next;
    }
    printf("\n");
        
}













































































