#include<stdio.h>
int prime(int x);
int main()
{
	int i,k;
	
	for(i=100;i<1000;i++)//����ѭ��100~1000��ֵ 
	{
		k=prime(i);//��100~1000��������ͨ��prime�������ж��Ƿ�Ϊ��������������ֵ��ֵ��k 
		if(k) printf("%5d",i); //if��k����ԭ���ˮ�ɻ���ԭ��һģһ�� 
	}
	
	return 0;
}

int prime(int x)
{
	int i;
	for(i=2;i<x;i++) 
	if(x%i==0) break;
	if(i>=x) return 1;
	else return 0;
}
