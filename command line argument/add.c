#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int sum=0;
    // printf("enter of argument %d \n",argv);
    for(int i=0;i<argc;i++){
        sum+=atoi(argv[i]);
    }
        printf("%d",sum);
    return 0;
}
