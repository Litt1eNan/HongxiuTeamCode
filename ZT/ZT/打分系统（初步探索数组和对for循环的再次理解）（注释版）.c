#include<stdio.h>//��ί���ϵͳ�� 
#define N 5//N Ϊͬѧ�ĸ��� 
#define M 6//MΪ��ί�Ĵ�� 
int main(void)
{
	int a[M]; 
	int i,j,n,max,min,temp,sum=0,k;
	float avr;
	
	for(k=0;k<N;k++)//ͬѧ���� 
	{
	printf("����ί�����%d��ͬѧ�ĳɼ���",k+1);//�������� 
	for(n=0;n<M;n++)
	scanf("%d",&a[n]);//scanf������Ǿ���Ԫ�ص�λ�ã�����Ԫ��a[i],����������a[M]  
	max=min=a[0];
	for(j=0;j<M;j++)
	{
	 sum+=a[j];
	if(a[j]>max) max=a[j];
	if(a[j]<min) min=a[j]; 
	}
//	printf("  max=%d",max);
//	printf("\nmin=%d",min);
//	printf("\nsum=%d",sum);//�������� 
	//������Ҫ�޸ģ���Ϊð������ 
	printf("��ͬѧ�ķ�����С����ֱ�Ϊ��");
	for(i=0;i<M-1;i++)
	 for(j=0;j<M-1-i;j++)
	  if(a[j]>a[j+1])
	  {
	  	temp=a[j];
	  	a[j]=a[j+1];
	  	a[j+1]=temp;   	
	   } 
	for(j=0;j<M;j++) 
	printf("%-4d",a[j]); 
	printf("\n"); 
	printf("��ͬѧȥ����߷ֺ���ͷֺ����ճɼ�Ϊ%.2f\n",(sum-max-min)/(M-2.0));  	
	} 
	return 0;
 } 
