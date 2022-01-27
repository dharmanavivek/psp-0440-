#include<stdio.h>
int main(){
    int i,avg,sum=0;
    float marks[5];
    printf("enter the subject marks:");
    for(i=0;i<5;i++){
    scanf("%f",&marks[i]);
    
    sum=sum+marks[i];}
    printf("the sum is %d\n",sum);
    avg=sum/5;
    printf("the average is %d",avg);
    
}
