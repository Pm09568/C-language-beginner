#include<stdio.h>
void displya(int *);
int mian(){
    char name[20];
    printf("enter string");
    scanf(%[^\n]",name);
          display(name);
          return 0;
}
          void display(char *name)
          {
              int l=0,i;
              while(*name !='\0')
              {
                  name++;
                  l++;
              }
              name--;
              for(int i=l-1;i>=0;i--,a--)
              {
                  printf("reverse string is %c ",*name)
                  }
