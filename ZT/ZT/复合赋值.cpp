#include<stdio.h>
int main()
{
	int a=5,b=6,c=2,d=7,x;
	a+=b*c;
	b-=c/b;
	printf("a=%d,b=%d,c=%d\n",a,b,c*=2*(a-b));
	/*a=a+(b*c)=17,b=b-c/b=6-0:2\6=0,
	c=c*[2*(a-b)]=2*2*(17-6)=44*/ 
	d%=a;
	printf("d=%d\n",d%=a);
	/*d=d%a=7%17=0��7  ����  d=d%a=7*/ 
	printf("x=%d\n",x=a+b+c+d);
	/*����������a=17 b=6 c=44 d=7 ��x=74  ��ֵ��ѭ�ҽ����
	��ֵ�������������������ͼ�*/ 
	return 0;
 } 
