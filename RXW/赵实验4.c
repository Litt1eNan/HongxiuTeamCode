#include<stdio.h>   //��һ�༶��8��ѧ���μ���Ӣ�￼�ԣ� ��д���򣬽���Щѧ���ĳɼ����Ӹߵ��͵�˳������
int main()
{
	int a[4]={7,5,9,4};
	int i,k,j;
	printf("���ͬѧ�ǵĳɼ�:");
	for(i=0;i<4;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
	
		 
	for(i=0;i<4;i++)//���� 
	{
		for(j=0;j<4;j++)
		{
			if(a[i]<a[j])
			{
				k=a[i];
				a[i]=a[j];
				a[j]=k;
			}
		}
	}
	for(i=0;i<4;i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
}

