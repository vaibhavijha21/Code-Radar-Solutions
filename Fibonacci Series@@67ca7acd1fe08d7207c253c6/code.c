int fibo(int num){
    if (num==0)
        return 0;
    else if (num==1)
        return 1;
    else 
        return fibo(num-1) + fibo(num-2);
}

 int main(){
        int num;
         scanf("%d\n",&num);
             printf("fibonacci series: ");
                 for (int i = 0; i < num; i++)
                   {
                        printf("%d ",fibo(i));
                   }
                     printf("\n");
                         return 0;
    
 }












































































