#include <stdio.h>

int main() {
    int a=1;
    for(a=1;a<=10;a++)
    {
        if(a<4)
        continue;
    printf("%d\n",a);
    }
    
    return 0;
}
