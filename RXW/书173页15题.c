#include<stdio.h>
int main()
{
	char ch,str[100];
	int i,k,n=0;
	printf("The string is:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		n++;//�жϳ��� 
	}
	if(n%2==0)//ż������ĸ 
	{
		k=n-1;
	}
	else
	{
		k=n-2;
	}
	//k��ʾ��Ҫ�ƶ���ǰ������һ������λ�� 
	ch=str[k];
	for(i=k-2;i>=1;i=i-2)
	{
		str[i+2]=str[i];
	}
	str[1]=ch;
	printf("The result is:%s\n",str);
}
