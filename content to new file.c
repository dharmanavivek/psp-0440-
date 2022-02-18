#include<stdio.h>
#include<string.h>
void main(){
char a[10];
int i,j;
FILE*fp;
fp=fopen("student3.txt","w");
printf("enter the name:");
scanf("%s",a);
printf("enter the age:");
scanf("%d",&i);
printf("enter the phone number:");
scanf("%d",&j);
fprintf(fp,"%d",j);
fp=fopen("student4.txt","w");
 printf("%d",j);
 fprintf(fp,"%d",j);
 fclose(fp);


}
