#include<stdio.h>//����һ�����εĺ��� 
void pound(int n);//��������
int main(void)
{
	int time=5;
	char ch='!';
	float f=6.0;
	
	pound(time);
	pound(ch);//==pound((int) time);
	pound(f);//==pound((int) f);
	
	return 0;
 } 
 
 void pound(int n)//�������ͷ��������������һ��int���͵Ĳ��� 
 {
 	while(n-->0) printf("#");
	 printf("\n"); 
 }
 
