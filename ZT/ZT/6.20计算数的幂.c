#include<stdio.h>
double power(double n,int p);/*�������� ANSI����ԭ��power����������Ϊdouble//ԭ���������double n��int p 
                             ��ʾpower���������Ĳ�����������*/ 
int main(void)//������ 
{
	double x,xpow;//���庯������ 
	int exp;
	
	printf("Enter a number and the positive integer power ");
	printf("to which\nthe number will be raised Enter q");
	printf("to quit.\n");
	while(scanf("%lf%d",&x,&exp)==2)
	{
		xpow=power(x,exp);//�������ã�����power��������������ֵ��power��ͨ������󣬽�������ظ���������������ֵ��xpow 
		printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
		printf("Enter next pair of numbers or q to quit\n");
	}
	printf("Hope you enjoyed this power trip--bye!\n");
	
	return 0;
}

double power(double n,int p)//�������壬���������βû�зֺţ����Ǹú���ԭ�͵�ĩβ�зֺţ�������������������ݾ��� 
{ //�ú�����Ҫ��ɵ�������� 
	double pow=1;
	int i;
	
	for(i=1;i<=p;i++)
	pow*=n;
	
	return pow;//����pow��ֵ 
}
