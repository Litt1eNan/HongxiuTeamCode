#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,j,b,c=0;
	scanf("%s",a);
	b=strlen(a)-1;
	for(i=0,j=b;i<=b/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			c=1;
			break;
		}
	}
	if(c==0)
	{
		printf("����");
	}
	else
	{
		printf("������");
	}
	return 0;
}
