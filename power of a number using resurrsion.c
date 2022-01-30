#include<stdio.h>
#include<math.h>
int power(int a,int b){
int p;
p=pow(a,b);
printf("%d^%d is %d",a,b,p);}
int main(){
    int a,b;
    printf("enter the base:");
    scanf("%d",&a);
     printf("enter the exponent:");
    scanf("%d",&b);
    power(a,b);
}
