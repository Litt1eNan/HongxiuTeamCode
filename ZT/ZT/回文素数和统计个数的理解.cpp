#include<stdio.h>
#include<math.h>
int main()        
{
	int i,m,k,kt=1;//kΪ��ʽ
	printf("11�ǻ�������\n"); 
	for(m=100;m<=1000;m++)
	{
	k=sqrt(m);
	for(i=2;i<=k;i++)//	
		if(m%i==0) break;
		  if(i>k&&m/100==m%10)
		  {
			printf("%d�ǻ�������",m);
			printf(" "); 
			if(kt%3==0) printf("\n");
		  	kt++;//ͳ�Ƹ��� Ҫ����һ��������棬ͳ��һ�� ����һ�� 
		  	
			}
		  
	}
	printf("һ����%d����������",kt);//�����ѭ��������ͳ�Ƹ��� 
	return 0; 
}
