#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;//�����޷������Σ������Ե��� 
	unsigned long div;//�����ж��������ܵ�Լ��   
    bool isprime;//���岼�������ж���٣�������� 
	
	printf("Please enter an integer for analysis; ");
	printf("Enter q to quit.\n");//�������� 
	while(scanf("%lu",&num)==1) //��ȡscanf�ķ���ֵ�������һ��ȷ��ֵ�򷵻��棬���⣨����q���߸�����ĸɶ�ģ��򷵻ؼ� 
	  {
	  for(div=2,isprime=true;(div*div)<=num;div++)//forѭ��������ѭ����ʼֵ�Ͳ������Ϊ�棬ƽ����Ϊѭ������ 
	   if(num%div==0) //�����Լ�� 
	   {
	   	if((div*div)!=num) printf("%lu is divisible by %lu and %lu.\n",num,div,num/div);//���Լ����ƽ����=num ����������Լ�� 
	   	else printf("%lu is divisible by %lu.\n");//����  ����һ��Լ�� 
	   	isprime=false;//��ֵ�����ж�Ϊ�٣��������� 
		} 
		if(isprime) printf("%lu is prime.\n",num);//��������ж�Ϊ�棬��˵���������� 
		printf("Please enter another integer for analysis;");//
		printf("Enter q to quit.\n");//ѭ������ 
		}//����ѭ��Ϊ�ȶ�ȡ����Ȼ�����forѭ���������жϣ�Ȼ���������룬����ѭ����ֱ���˳�ѭ�� 
		printf("bye.\n");
	return 0;
	
 } 
