#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for(int i =1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("%d\n",i);
    }
    return 0;
}