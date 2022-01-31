#include<stdio.h>
int main(){
    int a[10],n,i,min;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    min=a[n-1];
     for(i=0;i<n;i++){
    {
        if(a[i]<min)
        min=a[i];
       
    }}
     printf("minimum value is %d",min);
     return 0;
}
