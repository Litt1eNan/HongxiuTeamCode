#include<stdio.h>
int main()
{
int y1=1,y2=1,y3,i;
printf("%10d%10d",y1,y2);//���������һ�͵ڶ��� 
for(i=3;i<=30;i++)//ѭ���ӵ����ο�ʼ 
{
	y3=y1+y2;
	printf("%10d",y3);
	if(i%5==0) printf("\n");//ÿ5�����һ���س� 
	y1=y2;
	y2=y3;
}
return 0;
 } 
