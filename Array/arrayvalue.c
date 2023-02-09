#include"stdio.h"
int main(){
    int num[10]={10,23,35,48,62,64,70,80,90,10};
    int value=100;
    int i;
    for( i=0;i<10;i++){
        if(num[i]==value){
            printf("index value is= %d",i);
            break;
        }
    }
    if(i==10){
        printf("value not found");
    }

     return 0;
}
