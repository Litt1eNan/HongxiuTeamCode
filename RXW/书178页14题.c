#include<stdio.h>
int main()
{
	int i,a;
	int m[8]={0};
	printf("������һ��1~255�����֣�");
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{	
		m[i]=a%2;
		a=a/2;
	}
	for(i=0;i<8;i++)
	{
		printf("%d",m[i]);
	}
	return 0;
}
