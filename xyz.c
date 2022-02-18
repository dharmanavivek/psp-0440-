#include<stdio.h>
#include<string.h>
void main(){
char a[10];
int i,j;
FILE*fp;
fp=fopen("student.txt","w");
printf("enter the name:");
scanf("%s",a);
printf("enter the age:");
scanf("%d",&i);
printf("enter the phone number:");
scanf("%d",&j);
fprintf(fp,"%d",j);
fclose(fp);
fp=fopen("student2.txt","r");
    fscanf(fp,"%d",&j);
 printf("the phoe number is %d",j);
 fclose(fp);
 fp=fopen("student2.txt","w");
 printf("%d",i);
 fclose(fp);
    
    
}
