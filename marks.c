#include<stdio.h>
void main(){
    typedef struct marks
    {
        int student[5];
        
    }s1;
    s1 marks[5];
    for(int i=1;i<=5;i++){
    printf("enter student marks %d ",i);
        for(int j=0;j<5;j++){
            scanf("%d",&marks[i].student[j]);
        }
    }
    int sum=0,temp=0,greater=0,i,j,max=0;
    for( i=1;i<=5;i++){
    printf("student %d marks",i);
        for( j=0;j<5;j++){
       sum+= marks[i].student[j];
       if(sum>=greater){
        greater=sum;
       }
        }
         temp=sum;
        sum=0;
        printf(" sum is %d",temp);
        printf("\n"); 
    }
    
        printf("greatest marks is %d",greater); 
    
}