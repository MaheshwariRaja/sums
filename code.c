#include<stdio.h>
int add(int ,int );
void main()
{
int a,b,c;
scanf("%d",a);
scanf("%d",b);
c=add(a,b);
printf("%d",c);
}
int add(int a,int b)
{
 c=a+b;
 return c;
}

