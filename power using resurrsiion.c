#include<stdio.h>
#include<math.h>
int power(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return(a*pow(a,b-1));
    }
    
}
int main(){
    int a,b,p;
    printf("enter the base:");
    scanf("%d",&a);
    printf("enter the exponent:");
    scanf("%d",&b);
    p=power(a,b);
    printf("%d^%d is %d",a,b,p);
}
