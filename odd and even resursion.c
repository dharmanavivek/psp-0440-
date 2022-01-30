#include<stdio.h>
int eno(int i,int j){
    printf("even numbers:");
    for(int a=i;a<=j;a++)
    {
        if(a%2==0){
    printf(" %d\t",a);
        }
    }
    printf("\n");
    printf("odd numbers:");
    for(int b=i;b<=j;b++){
        if(b%2!=0){
            printf(" %d\t",b);
        }
    }
}
int main(){
    eno(1,20);
}
