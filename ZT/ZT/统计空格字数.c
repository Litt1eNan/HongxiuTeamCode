#include<stdio.h>//�ո��/0����һ�����������Կ���������һ�� 
#define N 81
int main()
{
	char a[N];
	int i,num=0;
	
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ') num++;
	}
	printf("%d",num);
	return 0;
}
