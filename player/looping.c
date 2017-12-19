#include<stdio.h>
int main()
{
	int a,c=0,i,s=0;
scanf("%d",&a);
for(i=0;i<4;i++)
{
	c=c*10+a;
	s=s+c;
}
printf("%d",s);
return 0;
}
