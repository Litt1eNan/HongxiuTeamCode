#include<stdio.h>
int main()
{
	int i=5,m;
	m=i++;
/*m=i++ ==>m=i�� i�Լ�,
��m=++i==>i�ԼӺ�ֵ��m*/ 
	printf("m=%d,i=%d,i++=%d",m,i,i++);
	return 0;
 } 
 /*���ڱ��������⣺����i=5  m=i++=5��i=6 
 Ȼ��prf����i��ִ�������� i++=6��i=7*/ 
