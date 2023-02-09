#include"stdio.h"
int display(int num[],int value);
int main(){
    int num[10]={12,23,13,34,54,65,42,96,18,92};
     int value =42;
     int index=display(num,value);
     if(index == -1){
       printf("Not found");
     }
     else{
        printf("index value =%d",index);
     }
     return 0;
}
int display(int num[],int value){
    int i=0;
    for(i=0;i<10;i++){
        if(num[i]==value){
            return 1;
        }
    }
    return -1;
}