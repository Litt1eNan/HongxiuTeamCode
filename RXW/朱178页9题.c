#include<stdio.h>
#include<string.h>
#define M 5000
int main()
{
	char a[100];
	gets(a);//a��ȫ�ַ��� 
	int j=strlen(a);//��ȡ���� 
	int m,i;
	printf("������ӵڼ����ַ���ʼ�滻��\n");
	scanf("%d",&m);//��� 
	int k=j-m;//��ʼ�滻 
	printf("�������滻��%d���ַ�!",k);
	char b[M];
	gets(b);
	char c[100];
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	strcat(c,b);//���� 
	puts(c);//c ���滻�� 
//	puts(a);
	return 0;
}
