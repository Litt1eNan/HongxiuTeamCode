#include<stdio.h>
int main()
{
	int i=5;
	i++;
/*m=i++ ==>m=i�� i�Լ�,
��m=++i==>i�ԼӺ�ֵ��m*/ 
	printf("i=%d,i++=%d",i,i++);
	return 0;
 } /*prf(,i++)��ʵ��i�ֽ�����һ�������Լ�����Ϊ 
 ���ڱ���������i=5��i++��i=6,prf��i=6�ٴ�ִ������
 ��i=7 i++=6*/ 
