#include<stdio.h>
void add();
void sub();
void mul();
void div();
void main()
{
	printf("function calling my self\n");
	add();
	sub();
	mul();
	div();}
void add()
{
     float a,b,c,d,e,f;
printf("enter the value of a and b:");
scanf("%f%f",&a,&b);
c=a+b;
printf("\nadddition is %f",c);
}
void sub()
{ float a,b,c,d,e,f;
printf("\nenter the value of a and b:");
scanf("%f%f",&a,&b);
d=a-b;
printf("\nsubtractionis %f",d);
}
void mul()
{ float a,b,c,d,e,f;
printf("\nenter the value of a and b:");
scanf("%f%f",&a,&b);
e=a*b;
printf("\nmultipilcation is %f",e);
}
void div()
{ float a,b,c,d,e,f;
printf("\nenter the value of a and b:");
scanf("%f%f",&a,&b);
f=a/b;
printf("\ndivision is %f",f);
}
