 #include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int a;
    for(int i = 1;i<=N;i++){
        for(int j = 1;j<=i;j++){
            if (j%2==0){
                a=1;
            }
            else {
                a=0;
            }
            a++
        }
        printf("\n");
}
}