#include<stdio.h>
int main(void)
{
	int age;
	int assets;
	char pet[30];
	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d %f",&age,&assets);
	scanf("%s",pet);/*scanf�ڶ�ȡ�ַ���ʱ����������һ���հ��ַ�(�����ո� �Ʊ�� ���з��ȣ���
 ��Ϊ�Ѿ���ɶ�ȡ���񣬺������ݲ��ٶ�ȡ�����Ǵ��뻺�������ȴ���һ������scanf
 ʱ���û�����������ȥ���*/ 
	printf("%d $%.2f  %s\n",age,assets,pet); 
return 0;
 } 
