#include<stdio.h>//scanf��printf��*�����η� 
int main(void)
{
	unsigned width,precision;
	int number=256;
	double weight=242.5;
	   
	printf("Enter a field width:\n");
	scanf("%d",&width);//����6 
	printf("The number is:%*d:\n",width,number);/*ʹ��*�Ŵ������������width���ַ���ȣ�
	���ҽ�����ַ���ȸ�������һ��ֵ���ڱ�����Ϊprecision*/ 
	printf("Now enter a width and a precision:");
	scanf("%d %d",&width,&precision);//����8 3 
	printf("Weight=%*.*f\n",width,precision,weight);
	printf("Done!\n"); 
	return 0;
 } /*����width�ṩ�ֶο�ȣ�number�Ǵ���ӡ�����֣���Ϊת��˵����*��d��ǰ�棬����printf()�Ĳ����б���
  ��width��number��ǰ�档ͬ����width��precision�ṩ��ӡweight�ĸ�ʽ����Ϣ
  �����û����������6,���6�ǳ���ʹ�õ��ֶο�ȡ����Եأ��������û�����8��3��˵���ֶο����8��С����
  ������ʾ3λ���֣�һ����ԣ�����Ӧ����weight��ֵ��������Щ������ֵ�� 
