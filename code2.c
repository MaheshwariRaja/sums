#include<stdio.h>
int mul(int ,int );
void main()
{
int a,b,c;
scanf("%d",a);
scanf("%d",b);
c=mul(a,b);
printf("%d",c);
}
int mul(int a,int b)
{
 c=a*b;
 return c;
}

