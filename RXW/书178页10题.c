#include<stdio.h>
#define M 10
int main(void)
{
	int array[M];
	int i,j,a,b;
	int mid,bot=0,top=M-1,loc,flag=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(array[j]<array[i])
			{
				a=array[j];
				array[j]=array[i];
				array[i]=a;
			}
		}
	}
	for(j=0;j<10;j++)
	{
		printf("%d  ",array[j]);
	}
	printf("\n");
	scanf("%d",&b);//������������û��b 
	while(bot<=top)
	{
		mid=(bot+top)/2;
		if(array[mid]==b)
		{
			loc=mid;
			flag=1;
			break;
		}
		else if(array[mid]>b)
		{
			top=mid-1;
		}
		else
		{
			bot=mid+1;
		}
	}
	if(flag==0)
	{
		printf("������\n");
	}
	else
	{
		printf("%d��������%d",b,loc+1);
	}
	return 0;
}






















