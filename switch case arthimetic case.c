#include <stdio.h>

int main()
{
    float a,b;
    int ch;
    printf("enter the value of a:");
    scanf("%f",&a);
    printf("enetr the value of b:");
    scanf("%f",&b);
    printf(" enter your own choice");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1 :
    printf("%.1f",a+b); 
    break; 
    case 2 :
    printf("%.1f",a-b);
    break;
    case 3 :
    printf("%.1f",a*b);
    break;
    case 4 :
    printf("%.1f",a/b);
    break;
    }
    
   
 
    
    return 0;
}
