#include<stdio.h>
int main(){
    int num=20;
    int*pnum=&num;
    printf("value of num=%d\n",num);
    printf("value of num=%d\n",*pnum);
    printf("value of num=%p\n",&num);
    printf("value of num=%p\n",&pnum);
}