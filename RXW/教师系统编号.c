#include<stdio.h>
#define N 10
int main()
{
	int i,j;
	char k,array[N]; 
	for(i=0;i<N;i++)
	{
		printf("����������ĵ�%d����ʦ�ı�ţ�",i+1);
		gets(array);
		for(j=0;j<i;j++)
		{
			if(array[j]==k)
			{
				printf("�˱���Ѵ��ڣ����������룺");
				scanf("%c",&k);
				j=-1;
			}
		}
		array[i]=k;
	}
	printf("\n");	
	for(i=0;i<N;i++)//��� 
	printf("  ��%d����ʦ�ı��Ϊ%c\n",i+1,array[i]);
	return 0;
}

