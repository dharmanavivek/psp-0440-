#include <stdio.h>

int main() {
  int x,y,*a,*b,temp;
    printf("print the value of x,y:");
    scanf("%d%d",&x,&y);
    printf("before swappinig\nx=%d \ny=%d\n",x,y);
     a=&x;
     b=&y;
 temp=*b;
 *b=*a;
 *a=temp;
    printf("after swapiinig\nx=%d \ny=%d\n",x,y);
    return 0;
}
