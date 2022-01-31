#include<stdio.h>
int main(){
    int a[10],n,i,large;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    large=0;
     for(i=0;i<n;i++){
    {
        if(a[i]>large)
        large=a[i];
       
    }}
     printf("max value is %d",large);
     return 0;
}
