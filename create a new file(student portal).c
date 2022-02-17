#include<stdio.h>
void main(){
int i,j;
char a[15],b[15];
FILE*fp;
fp=fopen("data.txt","w");
printf("enter the name :");
scanf("%s",a);
printf("enter the college:");
scanf("%s",b);
printf("enter the age:");
scanf("%d",&i);
printf("enter the phone number:");
scanf("%d",&j);
fprintf(fp,"%s\n%s\n%d\n%d",a,b,i,j);
fclose(fp);

}
