#include<stdio.h>//����Ƕ�׺���ʵ��1��n֮�����������ĺ͡�
int sum_ss(int x);
int main()
{
	int n,sum;
	printf("����n��ֵ��");
	scanf("%d",&n);
	sum=sum_ss(n);
	printf("\n1��%d��������Ϊ%d",n,sum);
	return 0;
 } 
 
 int sum_ss(int x)
 {
 	int i,j,sum_ss=0;
 	printf("1��%d�������ֱ�Ϊ��",x);
 	for(i=2;i<=x;i++)
 	{
	for(j=2;j<i;j++)
 	 if(i%j==0) break;
 	if(j>=i) 
	{
	printf("%-5d",i); 
	sum_ss+=i; 
	}
	 }
	 return sum_ss;
 }
