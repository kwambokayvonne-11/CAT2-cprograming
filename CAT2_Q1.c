/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:2D arrray to display scores with 2 rows and 2 colum
*/

//an array data structure is a structure that collects elements of the same data type and stores them in contiguous and adjacent memory locations

#include<stdio.h>
int main(){
    int i,j,k;
    int scores[2][2][2]={
    {{65,92},
    {84,72}},
    {{35,70},
    {59,67}}};

    for(i=0;i<2;i++){
       for(j=0;j<2;j++){
          for(k=0;k<2;k++) {
        printf("%d",scores[i][j][k]);

     }
     printf("\n");
     }
     printf("\n");
    }

return 0;}
