#include<stdio.h>//�ж��Ƿ�Ϊ���� 
#include<math.h> 
int main()
{
	int i,m;//kΪm��ƽ������mΪ�ж���
	float k;
	scanf("%d",&m);
	k=sqrt(m); 
for(i=2;i<=k;i++)
{
   if(m%i==0) 
   {
   printf("%d��������",m); break;/*����Ƿ��������ʹ�ӡ����������Ȼ������for 
   ȥ�ж�if*/ 
   } 
}
	if(i>k) printf("%d������",m);/*����Ƿ��������ж�Ϊ0,����ӡ*/ 

//printf("%d��������",m);
	return 0;
}
