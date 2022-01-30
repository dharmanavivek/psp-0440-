#include<stdio.h>
int pro(int a,int b){
if(a==0||b==0)
return(0);
else
return(a+pro(a,b-1));}
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    pro(a,b);
    printf("%d",pro(a,b));
}
