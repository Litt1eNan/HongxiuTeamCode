#include<stdio.h>
#include<string.h>
int main()
{
	char c1[100]={0},c2[100]={0};
	int a,b,c,i,j;
	gets(c1);
	gets(c2);
	a=strlen(c1);
	b=strlen(c2);
	if(a>b)
	{
		c=strlen(c1)+1-strlen(strstr(c1,c2));
		if(c!=0)
		{
			printf("%d\n",c);
		}
		else
		{
			printf("NO");//�漰ָ�룬11��11�ŵ���ĳ�������� 
		}
	}
	else
	{
		printf("NO");
	}
}
