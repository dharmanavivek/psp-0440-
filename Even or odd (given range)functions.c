#include<stdio.h>
void main()
{
    int a;
    for(a=2;a<=50;a++)
    {
        if(a%2==0)
        printf("\t%d",a);
    }
    printf("\nodd numbers");
    for(a=1;a<=50;++a)
    {
        if(a%2!=0)
        printf("\t%d",a);
    }}
