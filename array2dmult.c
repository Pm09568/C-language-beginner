// #include<stdio.h>
// int mian(){
//     int i,j,row1,col1,row2,col2;
    
//     printf("enter size of matrix 1:");
//     scanf("%d %d",&row1,&col1);
//     printf("size of matrix 1: %d by %d",row1,col1);

//     int a[row1][col1];
//     printf("enter matrix 1: ");
//     for(i=0;i<row1;i++)
//     {
//         for(j=0;j<col1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter size of matrix 2:");
//     scanf("%d %d",&row2,&col2);
//     printf("size of matrix 2: %d by %d",row2,col2);

//     int b[row2][col2];
//     printf("enter matrix 2: ");
//     for(i=0;i<row2;i++)
//     {
//         for(j=0;j<col2;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     int sum=0;
//     int c[row1][col2];
//     for(i=0;i<row1;i++)
//     {
//         for(j=0;j<col2;j++)
//         {
//         for(int k=0;k<col2;k++){
//            sum= sum+ a[i][k]*b[k][j];
//         }
//         c[i][j]=sum;
//         sum=0;
//         }
//     }
//      for(i=0;i<row1;i++)
//     {
//         for(j=0;j<col2;j++)
//         {
        
//         printf("%d ",c[i][j]);
//         }
//         printf("\n");
//     }
// return 0;
// }