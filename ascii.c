#include<stdio.h>
int main(){
    char vowel;
    printf("enter character :");
    scanf("%c",&vowel);
    // printf("%d",c);
    if(vowel>=65 && vowel<=97 || vowel>=98 && vowel<=122)
    {
      if(vowel=='a'||vowel=='e' || vowel=='i'|| vowel=='o'||vowel=='u')
      printf("Vowels\n");
      else
      printf("consonant");
    }
    else
    {
      printf("It's not a valid character.");

    }
     return 0;

}