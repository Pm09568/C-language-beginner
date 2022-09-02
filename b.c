#include<stdio.h>

int main(int argc, char const *argv[])
{
    int mark;
    printf ("enter number   (0-100)   :  ");
    scanf ("%d",&mark);

    if (mark >= 0 && mark <= 30)
    {
       printf("fail \n");
    }
    else if (mark >= 30   &&  mark <= 100)
    {
      printf("pass \n");
    }
    else {
        printf("wrong mark");

    }
    
    
    return 0;
}
