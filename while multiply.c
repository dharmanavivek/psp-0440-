#include <stdio.h>

int main()
{
    int a,b=1;
    printf("enter the number :");
    scanf("%d",&a);
    while(b<=15)
    {
 printf("%d*%d=%d\n",a,b,a*b);
  ++b;  
    }


    return 0;
}
