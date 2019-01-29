#include<stdio.h>
int div(int ,int );
void main()
{
int a,b,c;
scanf("%d",a);
scanf("%d",b);
c=div(a,b);
printf("%d",c);
}
int div(int a,int b)
{
 c=a/b;
 return c;
}

