 #include<stdio.h>
int main(){
  int amount,a ;
  printf("enter amount :");
  scanf("%d",&amount);
  
  
   a=(int)amount/100;
  printf("note of 100:%d\n",a);
  amount=amount-(a*100);
 a=(int)amount/50;
   printf("note of 50:%d\n",a);
    amount=amount(a*50);
    a=(int)amount/20;
    printf("note of 20:%d\n",a);
    amount=amount(a*20);
    a=(int)amount/10;
     printf("note of 10:%d\n",a);
     amount=amount(a*10);
     a=(int)amount/5;
      printf("note of 5:%d\n",a);
      amount=amount(a*5);
   a=(int)amount/2;
       printf("note of 2:%d\n",a);
       amount=amount(a*2);
   a=(int)amount/1;
        printf("note of 1:%d\n",a);  

   
    
    
    return 0;
    
}

  