#include<stdio.h>//���ú���ʵ���������� 
int fib(int x);
int main()
{
	int n;
	double sum;
	
	printf("�����������еĵ�n�"); 
	scanf("%d",&n);
	sum=fib(n);
	printf("�������еĵ�%d������Ӹ���Ϊ%.0lf��",n,sum); 
	
	return 0;
}

int fib(int x)
{
	int num=0;
	if(x==1||x==2) num=1;
	else  num=fib(x-1)+fib(x-2);
	return num;
}
