#include<stdio.h>
int main()
{
int year,month;
printf("������һ����ݣ�",year);
scanf("%d",&year);
if(year%4==0&&year%100!=0||year%400==0)
{
	printf("����Ϊ����\n");
 	printf("����������һ���·ݣ�");
	scanf("%d",&month);
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("������31��");break;
	case 4:
	case 6:
	case 9:
	case 11:printf("������30��");break;
	case 2:printf("���������29��");break;
	default:printf("�������");break; 
	}
}
else
{

    printf("����Ϊƽ��\n");
	printf("����������һ���·ݣ�");
	scanf("%d",&month);
	switch(month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("������31��");break;
	case 4:
	case 6:
	case 9:
	case 11:printf("������30��");break;
	case 2:printf("���������28��");break;
	default:printf("�������");break;	
	 } 
	
}
return 0;
}
