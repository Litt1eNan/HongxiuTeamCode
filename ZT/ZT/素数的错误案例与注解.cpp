#include<stdio.h>//�ж��Ƿ�Ϊ���� 
#include<math.h> 
int main()
{
	int i,m;//kΪm��ƽ������mΪ�ж���
	float k;
	scanf("%d",&m);
	k=sqrt(m); 
for(i=2;i<=k;i++)//����for�ж�i<=k����� 
   {
   if(m%i==0) 
    {
   printf("%d��������",m); break;//���Ϊ����������Ӯ��������Ȼ������ѭ�� 
    } 
   
	if(i>k) printf("%d������",m); /*����i<=k��������Զ����õ�if(i>k����
	�����������������ж�����Զ��ִ��*/ 
}
//��ȷ�޸ģ��� if(i>k) printf("%d������",m);������ŵ�for���������жϼ��� 
//printf("%d��������",m);
	return 0;
}
