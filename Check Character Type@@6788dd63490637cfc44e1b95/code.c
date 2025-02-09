#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if (a=='A' || a=='E' || a=='I'|| a=='O'|| a=='U'|| a=='a'|| a=='i'|| a=='o'|| a=='u') {
        printf("Vowel");
    }
    else if ((a>='A'&& a<='Z') || (a>='a'&& a<='z')) {
        printf("Consonant\n");
    }
    else if (a>='0' && a<='9'){
        printf("Digit\n");
    }
    else{
        printf("Special character\n");
    }
    return 0;
}