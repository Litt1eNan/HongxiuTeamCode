#include<stdio.h>//��ȡx����ִ� 
#include<string.h>
#define M 80
int main()
{
	char a[M]={0},b[M]={0};//b���Ӵ� 
	int i,j,m,n;
	gets(a);
	m=strlen(a);//�ⳤ�� 
	for(i=0;i<m;i++)
	{
		if(a[i]=='x')
		{
			for(i++,j=0;i<M;i++,j++)
			{
				if(a[i]=='x')
				{
					break;
				}
				b[j]=a[i];
			}
			break;
		}
	}
	puts(b);
	return 0;
}
