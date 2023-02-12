#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    FILE *fp;
     char data[]=("this is writing data into c file using fputs");
     int ch;
    fp=fopen("fputscfile.text","w");
    int i=0;
    while(data[i]='\0'){
        fputc(data[i],fp);
        i++;
        // printf("%c",ch);
    }
    // FILE *fp,*fpr;
    // // fpr=fopen("fputsfile.text","r");
    // if(fpr==NULL){
    //     printf("file is not created");
    // }
    // else{
    //     printf("file created");
    // }
    fclose(fp);

    return 0;
}
