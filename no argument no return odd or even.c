#include<stdio.h>
void even(){
	int a,n;
	printf("enter the value:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	printf("%d\n",++a);}
void odd(){
	int a,n;
	printf("enter the value:");
	scanf("%d",&n);
	printf("odd numbers\n");
	for(a=1;a<=n;a++)
	printf("%d\n",a++);
}
void main()
{
	even();
	odd();
}
