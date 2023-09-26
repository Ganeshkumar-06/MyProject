#include<stdio.h>
void swap(&a,&b){
  int c;
  c=a;
  a=b;
  b=c;
}
void main(){
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  printf("\nNumbers before swapping\vNum1 : %d\tNum2 : %d",num1,num2);
  swap(num1,num2);
  printf("\nNumbers after swapping\vNum1 : %d\tNum2 : %d",num1,num2);
}
