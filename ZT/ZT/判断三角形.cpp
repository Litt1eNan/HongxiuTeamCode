#include<stdio.h>
int main()
{
int a,b,c;
printf("���������ε����ߣ�");
scanf("%d%d%d",&a,&b,&c);
 if(a+b>c&&b+c>a&&c+a>b)
   {
   printf("�������γ���\n");
	if(a==b||b==c||c==a)
	 printf("��������Ϊ����������");
	 else if(a==b&&b==c&&c==a)
	  printf("��������Ϊ�ȱ�������");
	  else if("a*a+b*b==c*c||c*c+a*a==b*b||b*b+c*c==a*a")
	  printf("��������Ϊֱ��������");
	   else
 		printf("��������Ϊ��ͨ������");	
	} 
 else
  	printf("�������޷����������"); 
return 0;
 } 

