#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int x,y;
    struct node*next;
}linklist;
void main(){
        linklist *start;
        linklist *newNode=(struct node*)malloc(sizeof(linklist));
        newNode->x=10;
        newNode->y=12;
        newNode->next=NULL;
        start=newNode;

         linklist *newNode2=(struct node*)malloc(sizeof(linklist));
        newNode2->x=10;
        newNode2->y=12;
        newNode2->next=NULL;

        newNode->next=newNode2;
        linklist*temp=start;
        while(temp !=NULL){
            printf("%d ",temp->x);
            temp=temp->next;
        }
}