//#include<stdio.h>
//int main()
//{
//	int a,b;
//	int t;
//	scanf("%d %d",&a,&b);
//	while(b!=0)
//	{
//		t=a%b;
//		a=b;
//		b=t;
//	}
//	printf("gcd=%d\n",a);
//	return 0;
//}

#include <stdio.h>
int main()
{
    int a,b,r;
    printf("������������������\n");
    scanf("%d %d",&a,&b);
    //���a<b������a��b��ֵ
    if(a<b)
    {
        r=a;
        a=b;
        b=r;
    }
 
    //շת���������Ϊr�ĳ�ʼֵ��Ϊ0������while������ٻ�ִ��һ��
    //ֱ������Ϊ�㣬����ѭ��
    while(r!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
 
    //������Լ��
    printf("���Լ��Ϊ��%d\n",a);
 
    return 0;
}
 
