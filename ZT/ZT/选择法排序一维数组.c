#include<stdio.h>//���򷨽���������Ԫ�ص����� 
#define N 10 
int main(void) 
{
	int a[N]={65,24,58,178,190,237,-121,0,165,6};
	int i,j,temp;
	
	for(i=0;i<N-1;i++)//i��Ȼ����ѭ�����ж���� �� 
	 for(j=i+1;j<N;j++)//��ѭ������N-1�Σ���Σ���a[i]��a{i+1}֮��Ľ��бȽϣ���j�ĳ�ʼֵΪi+1�� 
	  if(a[i]>a[j])
	  {
	  	temp=a[i]; 
	  	a[i]=a[j];
	  	a[j]=temp;//ѡ����С������������ð�ݷ��Ǵ����³����� 
	   } 
	   for(i=0;i<N;i++)
	   printf("%5d",a[i]); 
	return 0;
}
