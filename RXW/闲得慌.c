#include<stdio.h>
#include<math.h>
int am(int x)
{
	int i;
	float k;
	k=sqrt(x);
	for(i=2;i<=k;i++)
	{
		if(x%i==0)
		{
			break;
		}
	}
	if(i<=k)
	{
		printf("��������%d\n",x);
	}
	else
	{
		printf("������%d\n",x);
	}
}

int main()
{
	int m;
	for(m=100;m<=120;m++)
	{
		am(m);
	}
	return 0;
}
