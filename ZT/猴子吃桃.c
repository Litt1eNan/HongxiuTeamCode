#include<stdio.h>
int cal(int n);
int main(void)
{
	int s;//����s����ͳ���������� 
	s=cal(1);// s=�����������޶�����ֵ��Ϊcal��1�� �����ú����ݹ鵽cal��1��ʱ�����ص���ֵ 
	printf("��������%d��\n",s);
	return 0;
 } 
 
 int cal(int n)//����ݹ麯�� 
 {
 	if(n==10) return 1;//��ʮ��ֻ��һ�����ӣ��ʷ���1 
 	else return (cal(n+1)+1)*2;//�ݹ麯����ֱ��cal��1��ʱ�����صݹ�ֵ 
 }
