#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if (a=='A' || a=='E' || A=='I'|| a=='O'|| a=='U'|| a=='a'|| a=='i'|| a=='o'|| a=='u') {
    printf("Vowel");
    }
    else if ((a>='A'&& a<='Z') || (a>='a' && a<='z')) {
        printf("Consonant");
    }
    else if (a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
    return 0;
}