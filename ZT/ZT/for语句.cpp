#include<stdio.h>
int main()
{
	int i,sign=1;
	double s=0;
	for(i=1;i<=30;i++)//i=1Ϊѭ��������ʼֵ��i<=30Ϊ����ѭ��������������i++Ϊѭ����������ֵ 
	{
		s=s+sign*((2.0*i-1)*(2.0*i))/((2.0*i+1)*(2.0*i+2));
		sign=-1*sign;
	}
	printf("s=%.6lf\n",s);
	return 0;
}
