#include<stdio.h>//��ί���ϵͳ�� 
#define N 5//N Ϊͬѧ�ĸ��� 
#define M 6//MΪ��ί�Ĵ�� 
int main(void)
{
	int a[M];//����һ������ 
	int i,j,n,max,min,temp,sum=0,k;//i,j,k,n�ֱ�����ѭ��������tempΪ��ʱ������ 
		
	for(k=0;k<N;k++)//k����ѭ��ͬѧ���� 
	{
	printf("����ί�����%d��ͬѧ�ĳɼ���",k+1); 
	for(n=0;n<M;n++)//nѭ��ÿ��ͬѧ�Ĵ����� 
	scanf("%d",&a[n]);//scanf������Ǿ���Ԫ�ص�λ�ã�����Ԫ��a[i],����������a[M]  
	max=min=a[0];//��������ٶ���max��min 
	for(j=0;j<M;j++)//����ѭ���жϳ������Сֵ��ͬʱ�����ۼ���� 
	{
	 sum+=a[j];
	if(a[j]>max) max=a[j];
	if(a[j]<min) min=a[j]; 
	}
//	printf("  max=%d",max);
//	printf("\nmin=%d",min);
//	printf("\nsum=%d",sum);//�������� 
	//�����Ѿ��޸ģ�ѡ����ð������ 
	printf("��ͬѧ�ķ�����С����ֱ�Ϊ��");
	for(i=0;i<M-1;i++)//i����ð�������ѭ������ 
	 for(j=0;j<M-1-i;j++)//j����ÿ��ð�������ѭ������ 
	  if(a[j]>a[j+1])//�ж��������Ĵ�С 
	  {
	  	temp=a[j];
	  	a[j]=a[j+1];
	  	a[j+1]=temp;   	
	   } 
	for(j=0;j<M;j++)//����ѭ������Ϊ0�������������Ԫ�� 
	printf("%-4d",a[j]); 
	printf("\n"); 
	printf("��ͬѧȥ����߷ֺ���ͷֺ����ճɼ�Ϊ%.2f\n",(sum-max-min)/(M-2.0));  	
	} 
	return 0;
 } 
