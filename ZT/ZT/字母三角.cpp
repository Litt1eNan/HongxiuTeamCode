#include<stdio.h>
int main()
{
int i,j;//iΪ�У�jΪ��
char ch; 
for(i=1;i<=4;i++)//��ѭ�� 
{
	ch='A';//ÿһ�ε���ѭ������A��ʼ 
	for(j=1;j<=7-i;j++)
	{
		printf(" ");//ÿһ�д�7-i��ʼ���A,����ʱ���Ͽո� 
		
	}
	for(j=1;j<=2*i-1;j++)//ÿһ�����2*i-1����ĸ 
	{
		printf("%c",ch);
		ch++; //�����ĸ��ÿ����ĸ���� 
	}
	printf("\n");//����ÿ����ѭ��֮ǰ�����һ���س� 
	
 } 


return 0;
}
