#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,c=0,b=0,max=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				c=i;
			}
		}
		printf("��%d������Ϊ%d,�±���%d,%d\n",j+1,max,c,j);
		max=0;
	}
	
}
