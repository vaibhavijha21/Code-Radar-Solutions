int fibonacciSeries(int num){
    if (num==0)
        return 0;
    else if (num==1)
        return 1;
    else 
        return fibonacciSeries(num-1) + fibonacciSeries(num-2);
}

 int main(){
        int num;
         scanf("%d\n",&num);
             printf("fibonacci series: ");
                 for (int i = 0; i < num; i++)
                   {
                        printf("%d ",fibonacciSeries(i));
                   }
                     printf("\n");
                         return 0;
    
 }












































































