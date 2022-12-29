#include"stdio.h"
int main(){
    int arr[5]={12,34,54,2,4};
    int min=arr[0];
    int i=0;
    for(i=1;i<10;i++){
        if(min>arr[i]){
           min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}