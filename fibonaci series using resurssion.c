#include<stdio.h>
int fib(int a){
    if(a==0){
        return 1;
    }
      else if(a==1){
        return 1;
    }
    else{
        return(fib(a-1)+fib(a-2));
    }
}
int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    fib(a);
    printf("%d",fib(a));
}
