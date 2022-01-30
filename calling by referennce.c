#include<stdio.h>
int sum1(int *i,int *j){
printf("%d is the sum of %d and %d",*i+*j,*i,*j);}
int sum2(int i,int j){
printf("\n%d is the sum of %d and %d",i+j,i,j);}
int main(){
    int a=10,b=20;
    sum1(&a,&b);
    sum2(a,b);
}
