#include<stdio.h>
#include<string.h>
void main(){
int i,j;
char a[15],b[15];
FILE*student;
student=fopen("struct.txt","r");
fscanf(student,"%s\n%s\n%d\n%d",a,b,&i,&j);
printf("name is %s",a);
printf("\ncollege:%s",b);
printf("\nage: is %d",i);
printf("\nphone number is %d",j);
fclose(student);

}
