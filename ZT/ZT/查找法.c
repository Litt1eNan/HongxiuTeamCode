#include<stdio.h>
#define N  10
int main(void)
{
	int a[N]={65,24,58,178,190,237,-121,0,165,6};
	int i,n,pd=0;//pdΪ�ж����� 
	
	scanf("%d",&n); 
	for(i=0;i<N;i++)
	 if(a[i]==n) 
	   {
	   	pd=1; 
	   break;}
	if(pd==1) printf("�ҵ��˸�����λ�ڵ�%d��λ",i+1);
	else printf("δ�ҵ�����"); 
	return 0;
}
