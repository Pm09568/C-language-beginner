#include"stdio.h"
int maximum(int num[]);
int main(){
    int num[5]={12,32,45,65,76};
    int max=maximum(num);
    printf("%d",max);

    return 0;
}
int maximum(int num[])
{
    int max=num[0];
    int i;
    for(i=0;i<5;i++){
        if(max<num[i]){
            max=num[i];
    }
    }
     return max;
    
}