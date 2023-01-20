#include"stdio.h"
int main (){
    int num[10]={10,12,23,43,45,56,65,76,46,25};
    int max=num[0];
    int i=0;
    for(i=1;i<10;i++){
        if(max<num[i]){
            max=num[i];
        }
    }
    printf("max=%d",max);
    return 0;

}
