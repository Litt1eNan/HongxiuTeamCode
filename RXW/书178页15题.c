#include<stdio.h>
int main()
{
	int a[10]={0};
	int d[10]={0};
	int i,j,b,c;
	printf("������10��1~99����\n");
	for(i=0;i<10;i++)//��ȡʮ���� 
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		b=a[i]%10;//��ø�λ�� 
		d[b]++;
	}
	for(i=0;i<10;i++)//��� 
	{
		if(d[i]!=0)
		{
			printf("%d��%d��\n",i,d[i]);
		}
	}
	return 0;
}
