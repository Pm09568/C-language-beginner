#include<stdio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("enter of argument %d \n",argv);
    for(int i=0;i<argc;i++){
        printf("%s",argv[i]);
    }
    return 0;
}
