#include<stdio.h>
int main(void)
{
	const int FREEZING=0;//���岻�ɱ�����ͬʱ��Ϊ�ֱ����� 
	float temperature;
	int cold_days=0;
	int all_days=0;
	
	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius,and enter q to quite\n");
	while(scanf("%f",&temperature)==1)//�����¶ȣ�����scanf��ֵ��scanf�ķ���ֵΪ������ĸ��� 
	{
		all_days++;//����ɹ�����һ��ֵ���������� 
		if(temperature<FREEZING)  cold_days++;//������µ���0���������� 
	}
	if(all_days!=0) printf("%d days total:%.1f%% were below freezing\n",all_days,100.0*(float)cold_days/all_days);
	// 
	else printf("No data entered!\n");
	//
	return 0;
}
