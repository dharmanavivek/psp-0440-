#include <stdio.h>

int main()
{
    int ch;
    printf("enter the grade:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:{
           printf("for 90%.......a");
           break;}
        case 2:{
            printf("for 70%......b");
            break;}
        case 3:{
            printf("for 60%......c");
            break;}
        case 4:{
            printf("for 50%.......d");
            break;}
        default:{
        printf("enter valid input");
        }
        
        
            
            
    }
    

    return 0;
}
