#include<stdio.h>
int main()
{
int i,n,score;
float sum=0,aver;
printf("����ѧ���ĸ�����");
scanf("%d",&n);
for(i=1;i<=n;i++)
 { 
	printf("������ѧ���ĳɼ���");
	scanf("%d",&score);
	if(score<0||score>100)
	{
		printf("�������\n");
		i--;
		printf("9\n");
		continue;
		printf("1\n");	 
	} 
	sum=sum+score;
	printf("2\n");
	 //i++��ʵ�����ڴ� 
 } 
 aver=sum/n;
printf("i=%d\n",i);
printf("i++=%d\n",i++);
printf("i--=%d\n",i--);
printf("i=%d\n",i);
 printf("average=%.2f\n",aver);
 printf("3\n");
	return 0;
 } 
//continue����������ѭ�������ж��Ƿ�ִ����һ��ѭ��  
