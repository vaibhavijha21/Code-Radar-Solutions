#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (int j = 1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf(" *");
            }
        printf("\n");  
    }
    for(int i=rows;i>=0;i--){
        for(int j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}