#include<stdio.h>//�ո��/0����һ�����������Կ������ÿո�ͳ�Ƶ��ʵĸ��� 
#define N 81
int main()
{
	char a[N];
	int i,num=0,word=0;
	
	gets(a);
	for(i=0;a[i]!='\0';i++)
	 {                                       //������� 
	 if(a[i]==' ') word=0;//Ѱ������Ԫ�أ����ĳλ��Ԫ��Ϊ�ո���wordΪ0,   
	else if(word==0) /* else a[i]!=' '&&word==0,  else==Ѱ��Ԫ�أ�ֱ��a[i]���ǿո�
	��ͬʱ����Ҫ����ǰ����ڿո񣬶�ǰ����ڿո����������word==0*/ 
	 {
	  word=1;//��ֵ��0��word������ѭ�����ҵ��ո���0�ٸ�ֵ��word��Ȼ��ִ���ж���� 
	  num++;//�����ж�������num++; 
	 }
	 }
	printf("it has %d words ",num);
	return 0;
}
