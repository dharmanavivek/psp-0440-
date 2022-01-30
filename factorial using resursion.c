#include<stdio.h>
int fact(int n){
  if(n==0){
      return 1;
  }
 else if(n==0){
     return 1;
 }
 else{
     return(n*fact(n-1));
 }}
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    fact(n);
    printf("%d",fact(n));
}
