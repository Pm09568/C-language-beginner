#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    char str1[20];
    printf("enter string: ");
    scanf("%s",str);
    printf("enter string: ");
    scanf("%s",str1);
    // printf("string is :%s\n",str);
    // printf("string length is :%d\n",strlen(str));
    // printf("Reverse string is :%s\n",strrev(str));
     printf("Adding of two string is :%s\n",strcat(str,str1));
    //  printf("Adding of two string is :%s\n",strcpy(str,str1));
    //  printf("Adding of two string is :%d\n",strcmp(str1,str));
  
    return 0;
}