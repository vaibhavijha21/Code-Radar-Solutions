#include <stdio.h>
int main(){
    int N;
    scanf("%d",&rows);
    for (int i=rows;i<=rows;i++){
        for (int j = 1;j<=rows-i;j++){
            printf(" ");
        }
            for(int k=1;k<=2*i-1;k++){
                printf("*");
            }
        

        
    }
    return 0;
}