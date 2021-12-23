#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c;
    float d,root1,root2,real,img;
    printf("enter the coefficient of x^2:");
    scanf("%d",&a);
printf("enter the coefficient of x:");
    scanf("%d",&b);
printf("enter the constant:");
    scanf("%d",&c);
    d=b*b-4*a*c;
    printf("%f",d);
    if (d>0)
    {
    root1=(-b+sqrt(d))/2*a;
    root2=(-b-sqrt(d))/2*a;
    printf("\n%f and %f",root1,root2);}
    else if (d==0)
   { root1=root2=-b/2*a;
    printf("\n%f=%f",root1,root2);}
    else
    {real=-b/2*a;
    img=(sqrt(-d)/2*a);
    printf("\n%f+i%f",real,img);
        printf("%f-i%f",real,img);
    }
    return 0;
}
