#include <stdio.h>

int main() {
    char ch;
    printf("enter a character :");
    scanf("%c",&ch);
    if(ch=='a' ||  ch=='i' || ch=='e' ||  ch=='o' ||  ch=='u'){
           printf(" Vowels");
    }
       else if(ch=='A'  ||  ch=='E' ||  ch=='I' ||  ch=='O' ||  ch=='U'){
        printf(" Vowels");
    }
    else{
        printf("constant");
    }

    return 0;
}