/*
Name:Yvonne Kwamboka
Reg No:PA106/G/28782/25
Description:c program that reads integers,proccess and writes the result on another file on another file
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    int num,i;
    fp=fopen("input.txt","w");

//prompt the user too enter input
printf("enter 10 integers:");
for(i=0;i<10;i++){
printf("integer %d:",i+1);
scanf("%d",&num);
fprintf(fp,"%d\n",num);}

fclose(fp);
printf("data successfully written to input.txt\n");

//read integers calculate sum and average and write to output.txt
FILE *fpIn,*fpOut;
int count,sum;
float avr;

fpIn=fopen("input.txt","r");
if(fpIn==NULL){
    printf("error opening input.txt for reading!\n");
    exit(1);
}
while(fscanf(fpIn,"%d",&num)==1){
    sum+=num;
    count++;
}
fclose(fpIn);
avr=(float)sum/count;

fpOut=fopen("output.txt","w");
if(fpOut==NULL){
    printf("error opening output.txt for writing!\n");
    exit(1);
}
fprintf(fpOut,"sum:%d\n",sum);
fprintf(fpOut,"average:%f\n",avr);
fclose(fpOut);

printf("sum and average written to output.txt\n\n");

//display of contents of both files
char ch;

printf("contents of  input.txt:\n");
fp=fopen("input.txt","r");
if(fp==NULL){

    printf("error reading input.txt!\n");
    exit(1);
}
while((ch=fgetc(fp))!=EOF)
    putchar(ch);
fclose(fp);

printf("\ncontents of output.txt:\n");
fp=fopen("output.txt","r");
if(fp==NULL){
    printf("error reading output.txt!\n");
    exit(1);
}
while((ch=fgetc(fp))!=EOF)
    putchar(ch);
fclose(fp);

return 0;}
