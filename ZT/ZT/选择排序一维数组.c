#include<stdio.h>//����ѡ�����򷨣�����һά����
#define  N 10 
int main(void)
{
	int a[N]={1,3,5,7,9,-2,-4,-6,-8,-10}; 
	int i,j,t;//t������ʱ�������
	for(i=0;i<N-1;i++)
	 for(j=i+1;j<N;j++)
	  if(a[i]>a[j])
	  {
	  	t=a[i]; 
	  	a[i]=a[j];
	  	a[j]=t;
	  	
	   } 
	for(i=0;i<N;i++)
	 printf("%3d",a[i]); 
	return 0;
}
